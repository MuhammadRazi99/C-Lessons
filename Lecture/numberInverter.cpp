#include<iostream>
#include<cmath>
using namespace std;
void inverter(int,int);
int main(){
	int num;
	cout<<"Enter a number=";
	cin>>num;
	int a=log10(num)+1;
	inverter(num,a);
	return 0;
}
void inverter(int a,int b){
	int num=0;
	for(int i=1;i<=b;i++){
		num=(num*10)+(a%10);
		a=a/10;
	}
	cout<<num<<endl;
}
