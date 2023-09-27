#include<iostream>
using namespace std;
#define maxsize 10
string reverseStr(string);
class stack{
	char arr[maxsize];
	public:
	int top=-1;
	friend string postFix(string);
	void push(char value){
		if(top==maxsize-1)
		{cout<<"Stack overflow"<<endl;}
		else {
			top++;
			arr[top]=value;
		}
	}
	
	char pop(){
		if(top==-1)
		{cout<<"Stack underflow"<<endl;}
		else{
			char value=arr[top];
			top--;
			return value;
		}
	}
	
	char peek()
	{return arr[top];}
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
while(stk1.top!=-1)
{outStr+=stk1.pop();}

return outStr;	
}

string preFix(string inStr){
	inStr=reverseStr(inStr);
	inStr=postFix(inStr);
	return reverseStr(inStr);
}
string reverseStr(string inStr){
		stack s;
	for(int i=0;inStr[i]!='\0';i++){
		s.push(inStr[i]);
	}
	string outStr="";
	for(int i=0;inStr[i]!='\0';i++){
		outStr+=s.pop();
	}
	return outStr;
}
int main(){
string inFix;
int choice;
cout<<"Enter a string=";
cin>>inFix;
cout<<"1. To Post Fix\n2.To Pre Fix\n";
cout<<"Enter your choice:";
cin>>choice;
switch(choice){
	case 1:
	cout<<postFix(inFix);
	break;
	case 2:
	cout<<preFix(inFix);
	break;
}
return 0;
}

