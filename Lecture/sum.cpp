#include<iostream>
using namespace std;
int sum(int,int);
int main(){
	int aq,sw;
	cout<<"Enter first no";
	cin>>aq;
	cout<<"Enter second no";
	cin>>sw;
	cout<<"Sum="<<sum(aq,sw);
	return 0;
}
int sum(int a,int b){
	int c=a+b;
	return c;
}
