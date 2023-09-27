#include<iostream>
using namespace std;
int main(){//Input
	int o=1,e=0,num,Osum=0,Esum=0;
	cout<<"Enter integer:";
	cin>>num;
	if(num==0){cout<<"no odd number";goto zeroNumber;}
	cout<<"Odd numbers less than or equal to "<<num<<" are:";
	do {   //odd numbers
	cout<<o<<" ";
	Osum+=o;
	o=o+2;	
	}while(o<=num);
	zeroNumber:
	cout<<endl;
	cout<<"Even numbers less than or equal to "<<num<<" are:";
	do//even numbers
	{
		cout<<e<<" ";
		Esum+=e;
		e=e+2;
	}while(e<=num);
	cout<<endl;
	cout<<"Sum of odd numbers="<<Osum<<endl;
	cout<<"Sum of even numbers="<<Esum<<endl;
	return 0;
}

