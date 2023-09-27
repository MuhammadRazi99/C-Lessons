#include<iostream>
using namespace std;
int main(){
	int num,fact=1;
	cout<<"Enter any value to calculate its factorial:";
	cin>>num;
	int a=num;
	if(num==0)goto zeroNumber;
	do{
		fact*=num;
		num--;
	}while(num>0);
	zeroNumber:
	cout<<"Factorial of "<<a<<" is:"<<fact<<endl;
	return 0;
}
