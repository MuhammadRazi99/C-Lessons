#include<iostream>
using namespace std;
int main(){// input
	int o=1,e=0,num,Osum=0,Esum=0;
	cout<<"Enter integer:";
	cin>>num;
	cout<<"Odd numbers less than or equal to "<<num<<" are:";
	while(o<=num){//odd numbers
	cout<<o<<" ";
	Osum+=o;
	o=o+2;	
	}
	cout<<endl;
	cout<<"Even numbers less than or equal to "<<num<<" are:";
	while(e<=num)//even numbers
	{
		cout<<e<<" ";
		Esum+=e;
		e=e+2;
	}
	cout<<endl;
	cout<<"Sum of odd numbers="<<Osum<<endl;
	cout<<"Sum of even numbers="<<Esum<<endl;
	return 0;
}

