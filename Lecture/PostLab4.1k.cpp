#include<iostream>
using namespace std;
int main(){//INPUT FROM USER
	int num1,num2,gcd;
	cout<<"Enter the first number:";
	cin>>num1;
	cout<<"Enter the second number:";
	cin>>num2;
	//gdp is always smaller than the given number
	for(int i=1;i<=num1 && i<=num2;i++)
	{
		if(num1%i==0 && num2%i==0)
		{gcd=i;}	
	}
	cout<<"GCD of "<<num1<<" and "<<num2<<" is:"<<gcd<<endl;
	return 0;
}
