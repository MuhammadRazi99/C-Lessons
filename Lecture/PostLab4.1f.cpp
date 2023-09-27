#include<iostream>
using namespace std;
int main(){ //INPUT FROM USER
	int num,fact=1;
	cout<<"Enter any value to calculate its factorial:";
	cin>>num;
	for(int i=num;i>=1;i--){  //LOOP
		fact*=i;
	}
	cout<<"Factorial of "<<num<<" is:"<<fact<<endl;
	return 0;
}
