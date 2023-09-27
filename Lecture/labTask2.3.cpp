#include<iostream>
using namespace std;
int main(){
	int three,h,a,t,o;
	cout<<"Enter a three-digit number:";
	cin>>three;
	h=three/100;
	a=three%100;
	t=a/10;
	o=a%10;
	cout<<"There are "<<h<<" Hundreds, "<<t<<" Tens and "<<o<<" Ones in "<<three;
	return 0;
}
