#include<iostream>
using namespace std;
struct node{
	char data;
	node *next;
};	
class stack{
	node *top=NULL;
public:
	friend string postFix(string);
	
	void push(char value){
			node *temp=new node();
			temp->data=value;
			temp->next=top;
			top=temp;
	}
	
	char pop(){
		if(top==NULL)
		{cout<<"Stack underflow"<<endl;}
		else{
			node *temp=top;
			char value=temp->data;
			top=temp->next;
			delete temp;
			return value;
		}
	}
	
	char peek()
	{return top->data;}
};

string postFix(string inStr){
stack stk1;
string outStr;
for(int i=0;i<inStr.length();i++){

if(inStr[i]=='(')
{stk1.push(inStr[i]);}

else if(inStr[i]==')'){
	while(stk1.peek()!='(')
	{outStr+=stk1.pop();}
	stk1.pop();
}

else if(inStr[i]=='/'){
	while(stk1.peek()=='*'||stk1.peek()=='+'||stk1.peek()=='-')
	{outStr+=stk1.pop();}
	stk1.push('/');
}

else if	(inStr[i]=='*'){
	while(stk1.peek()=='+'&&stk1.peek()=='-')
	{outStr+=stk1.pop();}
	stk1.push('*');
}

else if	(inStr[i]=='+'){
	while(stk1.peek()=='-')
	{outStr+=stk1.pop();}
	stk1.push('+');
}

else if(inStr[i]=='-'){stk1.push('-');}

else {outStr+=inStr[i];}
}
while(stk1.top!=NULL)
{outStr+=stk1.pop();}

return outStr;	
}
int main(){
string inFix;
cout<<"Enter a string=";
cin>>inFix;
cout<<postFix(inFix);
return 0;
}

