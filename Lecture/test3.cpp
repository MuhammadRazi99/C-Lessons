#include<iostream>
using namespace std;
int main(){
float num1,num2;
char oper;
cout<<"Enter first number=";
cin>>num1;
cout<<"Enter second number=";
cin>>num2;
cout<<"\'+\' for Addition, \'-\' for Subtraction, \'*\' for Multiplication, \'/\' for Division"<<endl;
cout<<"Enter the operator=";
cin>>oper;
if(oper=='+')
{cout<<num1<<" + "<<num2<<" ="<<num1+num2<<endl;}
else if(oper=='-')
{cout<<num1<<" - "<<num2<<" ="<<num1-num2<<endl;}
else if(oper=='*')
{cout<<num1<<" * "<<num2<<" ="<<num1*num2<<endl;}
else if(oper=='/')
{cout<<num1<<" / "<<num2<<" ="<<num1/num2<<endl;}
else cout<<"Invalid Input";
}
