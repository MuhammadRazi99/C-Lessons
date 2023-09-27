#include<iostream>
#include<cstring>
using namespace std;
// without parenthesis
int calculate(int a,int b, char c);
struct node{
	int data;
	node * next;
};
class stack{
public:
	node *top=NULL;
	void push(int value){
		node *temp=new node();
		temp->data=value;
		temp->next=top;
		top=temp;
	}
	int pop(){
		node *temp=top;
		if(top==NULL)
		{cout<<"Nothing to pop";}
		else {
			int a=temp->data;
			top=temp->next;
			delete temp;
			return a;
		}
	}
	char peek(){
		return char(top->data);
	}
	void display(){
		node* temp=top;
		while(temp!=NULL){
			cout<<temp->data<<" ";
		}
		cout<<endl;
	}	
};
void prasingInfix(string inStr){
stack oper;
stack num;
int a,b;
char c;
int i;
for(i=0;i<inStr.length();i++){
	cout<<"1";
	if(inStr[i]=='/' || inStr[i]=='*'){
		oper.push(int(inStr[i]));}
	else if (inStr[i]=='+'||inStr[i]=='-'){
		if(oper.peek()=='*'||oper.peek()=='/'){
			a=num.pop();
			b=num.pop();
			c=char(oper.pop());
			num.push(calculate(a,b,c));}
	oper.push(int(inStr[i]));
	}

//	else {
//	cout<<"no"<<endl;
//	num.push(int(inStr[i]));
//	}
//	cout<<"a"<<endl;
}
oper.display();
num.display();
while(oper.top!=NULL){
	a=num.pop();
	b=num.pop();
	c=char(oper.pop());
	num.push(calculate(a,b,c));
}


}
int calculate(int a,int b, char c){
	switch(c){
		case '+':
			return b+a;
//			break;
		case '-':
			return b-a;
//			break;
		case '*':
			return b*a;
//			break;
		case '/':
			return b/a;
//			break;	
	}
}
int main(){
string str="3+4-5/2";
prasingInfix(str);

return 0;
}
