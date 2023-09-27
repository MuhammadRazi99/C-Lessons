#include<iostream>
#include<Windows.h>
using namespace std;
int main(){
	int a,b;
	cout<<"Enter value 1:";
	cin>>a;
	cout<<"Enter value 2:";
	cin>>b;
	cout<<"Sum:"<<a<<"+"<<b<<"=\a"<<a+b<<endl;
	Sleep(500);
	cout<<"Diference:"<<a<<"-"<<b<<"=\a"<<a-b<<endl;
	Sleep(500);
	cout<<"Product:"<<a<<"*"<<b<<"=\a"<<a*b<<endl;
	Sleep(500);
	cout<<"Quotient:"<<a<<"/"<<b<<"=\a"<<a/b<<endl;
	Sleep(500);
	cout<<"Remainder:"<<a<<"%"<<b<<"=\a"<<a%b<<endl;
	Sleep(500);
	return 0;
}
