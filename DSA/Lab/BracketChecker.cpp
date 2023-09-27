	/*Name:Muhammad Razi-ur-Rehman
Class: BESE-26C
CMS No:337974
Assignment 2*/
#include<iostream>
using namespace std;
#define size 20
class stack{
	private:
	char arr[size];
	int top;
	public:
	stack(){top=-1;}
//push function
void push(char n){
	if(top==size-1)
	{cout<<"Stack full"<<endl;}
	else {
		top++;
		arr[top]=n;
		}
	}
//pop function
char pop(){
	if(top==-1)
	{cout<<"Stack is Empty"<<endl;}
	else{
		char ch=arr[top];
		top--;
		return ch;
	}
}
//bracket check
void bracketCheck(string str1){
char c;
for(int i=0;i<str1.length();i++){
	switch(str1[i]){
		case '(':
			push('(');
			break;
		case '[':
			push('[');
			break;
		case '{':
			push('{');
			break;
		case ')':
			c=pop();
			if(c!='(')
			{cout<<"Invalid expression"<<endl;return;}
			break;
		case '}':
			c=pop();
			if(c!='{')
			{cout<<"Invalid expression"<<endl;return;}
			break;
		case ']':
			c=pop();
			if(c!='[')
			{cout<<"Invalid expression"<<endl;return;}
			break;
	}
}
if(top==-1)
{cout<<"Valid Expression"<<endl;}
else cout<<"Invalid Expression"<<endl;
}
};
int main(){
stack s;
string a;
cout<<"Enter an Expression:";
cin>>a;
s.bracketCheck(a);
return 0;
}
