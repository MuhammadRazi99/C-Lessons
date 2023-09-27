#include<iostream>
using namespace std;
void swapNum(int &,int &);
int main(){
	int num1,num2;
	cout<<"Enter first num:";
	cin>>num1;
	cout<<"Enter second num:";
	cin>>num2;
	swapNum(num1,num2);
	cout<<"value of num1:"<<num1<<endl;
	cout<<"value of num2:"<<num2<<endl;
	return 0;
}
void swapNum(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;	
}
