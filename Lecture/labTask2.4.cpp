#include<iostream>
#include<iomanip>
using namespace std; 
int main(){ 
	int a,b;
	cout<<"Enter the first number:";
	cin>>a;
	cout<<"Enter the second number:";
	cin>>b;
	float per=a*100/b;
	cout<<a<<" is equal to "<<setprecision(2)<<fixed<<per<<"% of "<<b;
}
