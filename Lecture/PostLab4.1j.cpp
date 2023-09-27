#include<iostream>
using namespace std;
int main(){//INPUT FROM USER
	int num1,num2,gcd;
	cout<<"Enter the first number:";
	cin>>num1;
	cout<<"Enter the second number:";
	cin>>num2;
	//As GDP is always smaller than the given number
	do{
		if(num1%i==0 && num2%i==0)
		{gcd=i;}
		i++;	
	}while(i<=num1 && i<=num2);
	//OUTPUT
	cout<<"GCD of "<<num1<<" and "<<num2<<" is:"<<gcd<<endl;
	return 0;
}
