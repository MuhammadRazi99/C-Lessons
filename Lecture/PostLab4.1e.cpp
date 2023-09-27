#include<iostream>
using namespace std;
int main(){//INPUT FROM USER
	int num,fact=1;
	cout<<"Enter any value to calculate its factorial:";
	cin>>num;
	int a=num;
	while(num>=1){  //LOOP
		fact*=num;
		num--;
	}
	cout<<"Factorial of "<<a<<" is:"<<fact<<endl;
	return 0;
}
