#include<iostream>
using namespace std;
int main(){
	int num1,num2,num3,num4,num5;
	cout<<"Enter the first number:";
	cin>>num1;
	cout<<"Enter the second number:";
	cin>>num2;
	cout<<"Enter the third number:";
	cin>>num3;
	cout<<"Enter the forth number:";
	cin>>num4;
	cout<<"Enter the fifth number:";
	cin>>num5;
	if(num1>num2 && num1>num3 && num1>num4 && num1>num5)
	cout<<"number 1 is greater";
	else if(num2>num1 && num2>num3 && num2>num4 && num2>num5)
	cout<<"number 2 is greater";
	else if(num3>num1 && num3>num2 && num3>num4 && num3>num5)
	cout<<"number 3 is greater";
	else if(num4>num1 && num4>num2 && num4>num3 && num4>num5)
	cout<<"number 4 is greater";
	else cout<<"number 5 is greater"; 
}
