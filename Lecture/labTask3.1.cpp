#include<iostream>
using namespace std;
int main(){
	int num1,num2;
	cout<<"Enter the first number:";
	cin>>num1;
	cout<<"Enter the second number:";
	cin>>num2;
	if (num1>num2){
		cout<<"First number is greater";
	}
	else if(num2>num1){
	cout<<"Second number is greater";} 
else cout<<"they are equal";
}
