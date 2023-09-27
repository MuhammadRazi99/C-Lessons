#include<iostream>
using namespace std;
int main(){
	int num1,num2,i=1,min,gcd;
	cout<<"Enter the first number:";
	cin>>num1;
	cout<<"Enter the second number:";
	cin>>num2;
	if(num1<num2)
	min=num1;
	else 
	min=num2;
	while(i<=min)
	{
		if(num1%i==0 && num2%i==0)
		{gcd=i;}
		i++;	
	}
	cout<<"GCD of "<<num1<<" and "<<num2<<" is:"<<gcd<<endl;
	return 0;
}
