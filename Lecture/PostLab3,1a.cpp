#include<iostream>
using namespace std;
int main(){//input section 
	int a,b;
	char oper;
	cout<<"Enter first number:";
	cin>>a;
	cout<<"Enter second number:";
	cin>>b;
	cout<<"Enter the basic arithemic operator:";
	cin>>oper;
	switch(oper){
		case '+': //the addition section
			cout<<"The sum of "<<a<<" and "<<b<<"="<<a+b;
		break;
		case '-': //the subtraction section
			cout<<"The difference of "<<a<<" and "<<b<<"="<<a-b;
		break;
		case '*': //the Multiplication section
			cout<<"The multiplication of "<<a<<" and "<<b<<"="<<a*b;
		break;
		case '/' : //the division section
			cout<<"The division of "<<a<<" and "<<b<<"="<<a/b;
		break;
		case '%': //the mode section
			cout<<"The Mode of "<<a<<" and "<<b<<"="<<a%b;
		break;			
		default : //in case of wrong type of input
			cout<<"syntax error";
		break;
	}
	return 0;
}
