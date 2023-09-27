/*
Name: Muhammad Razi-ur-Rehman
Class: BESE-26C
CMS no: 337974
Assignment 5.2
*/
#include <iostream>
using namespace std;
#define maxsize 20
int calculate(int a,int b, char c){
	switch(c){
		case '+':
			return b+a;
		case '-':
			return b-a;
		case '*':
			return b*a;
		case '/':
			return b/a;
	}
}
class Stack{
	int arr[maxsize];
	public:
	int top=-1;
	
	void push(int value){
		if(top==maxsize-1)
		{cout<<"Stack overflow"<<endl;}
		else {
			top++;
			arr[top]=value;
		}
	}
	
	int pop(){
		if(top==-1)
		{cout<<"Stack underflow"<<endl;}
		else{
			int value=arr[top];
			top--;
			return value;
		}
	}
	
	char peek()
	{return char(arr[top]);}
	
	void display(){
		for(int i=top;i>=0;i--)
		{cout<<arr[i]<<" ";}
		cout<<endl;
	}
};

void prasingInfix(string inStr){
Stack oper;
Stack num;
int a,b;
char c;
for(int i=0;i<inStr.length();i++){
	if(inStr[i]=='/' || inStr[i]=='*')
	{oper.push(int(inStr[i]));}
	
	else if (inStr[i]=='+'||inStr[i]=='-'){
		if(oper.peek()=='*'||oper.peek()=='/'){
			a=num.pop();
			b=num.pop();
			c=char(oper.pop());
			num.push(calculate(a,b,c));
		}
		oper.push(int(inStr[i]));
	}
	
	else 
	{num.push(int(inStr[i])-48);}
}
while(oper.top!=-1){
	a=num.pop();
	b=num.pop();
	c=char(oper.pop());
	num.push(calculate(a,b,c));
}
num.display();
}

int main(){
string str="3+4-5/2";
prasingInfix(str);
return 0;
}
