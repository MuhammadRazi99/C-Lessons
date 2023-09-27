#include<iostream>
using namespace std;
int main(){
	int num,osum=0,esum=0;
	cout<<"Enter integer:";
	cin>>num;
	cout<<"Odd numbers less than or equal to "<<num<<" are:";
	for(int i=1;i<=num;i=i+2)//odd numbers
	{
	cout<<i<<" ";
	osum+=i;	
	}
	cout<<endl;
	cout<<"Even numbers less than or equal to "<<num<<" are:";
	for(int j=2;j<=num;j=j+2)//even numbers
	{
		cout<<j<<" ";
		esum+=j;
	}
	cout<<endl;
	cout<<"Sum of odd numbers="<<osum<<endl;
	cout<<"Sum of even numbers="<<esum<<endl;
	return 0;
}

