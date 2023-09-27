#include<iostream>
using namespace std;
struct node{
	char data;
	node *next;
};
class stack{
public:
	node *top=NULL;
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
void bracketChecker(string inStr){
	stack s;
	char c;
	for(int i=0;i<inStr.length();i++){
		if(inStr[i]=='['||inStr[i]=='{'||inStr[i]=='('){
		s.push(inStr[i]);	
		}
		else if(inStr[i]==']'){
			c=s.pop();
			if(c!='['){
			cout<<"Invalid Expresion";
			break;
			}
		}
		else if(inStr[i]=='}'){
			c=s.pop();
			if(c!='{'){
			cout<<"Invalid Expresion";
			break;
			}
		}
		else if(inStr[i]==')'){
			c=s.pop();
			if(c!='('){
			cout<<"Invalid Expresion";
			break;
			}
		}
		else {
			continue;
		}
	}
	if(s.top==NULL){
		cout<<"Valid Expression";
	}
	else cout<<"Invalid Expression";
}
