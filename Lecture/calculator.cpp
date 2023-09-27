#include<iostream>
using namespace std;
int main(){
	int a,b;
	char op;
	cout<<"Enter first number=";
	cin>>a;
	cout<<"Enter second number=";
	cin>>b;
	cout<<"Enter the given operator=";
	cin>>op;
	switch(op){
		case '+':
			cout<<"The sum of "<<a<<" and "<<b<<"="<<a+b<<endl;
		break;
		case '-':
			cout<<"The difference of "<<a<<" and "<<b<<"="<<a-b<<endl;
		break;
		case '*':
			cout<<"The multiplication of "<<a<<" and "<<b<<"="<<a*b<<endl;
		break;
		case '/':
		case '\\':	
			cout<<"The division of "<<a<<" and "<<b<<"="<<a/b<<endl;
		break;
		case '%':
			cout<<"The Mode of "<<a<<" and "<<b<<"="<<a%b<<endl;
		break;			
		default :
			cout<<"syntax error";
		break;
	}
	return 0;
}
