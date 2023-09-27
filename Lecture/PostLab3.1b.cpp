#include<iostream>
using namespace std;
int main(){//input section
	int a,b;
	char oper;
	cout<<"Enter first number:";
	cin>>a;
	cout<<"Enter second number:";
	cin>>b;
	cout<<"Enter basic arithmetic operations:";
	cin>>oper;
	if(oper=='+')cout<<a<<oper<<b<<"="<<a+b;//addition operation
	else if (oper=='-')cout<<a<<oper<<b<<"="<<a-b;//subtraction operation
	else if (oper=='*')cout<<a<<oper<<b<<"="<<a*b;//multiplication operator
	else if (oper=='/')cout<<a<<oper<<b<<"="<<a/b;//division operator
	else if (oper=='%')cout<<a<<oper<<b<<"="<<a%b;//mode operator
	else cout<<"You can enter only \"+\" \"-\" \"*\" \"/\" \"%\" as operator "; //incase the user erter wrong input
	return 0;
}
