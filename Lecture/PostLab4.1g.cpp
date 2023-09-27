#include<iostream>
using namespace std;
int main(){//INPUT FROM USER
	int val,i=0,sum=0;
	cout<<"Enter any value:";
	cin>>val;
	while(i<=val){ //LOOP
		sum+=i;
		i++;}
		//OUTPUT
	cout<<"Sum of the integers from 1 to "<<val<<" is:"<<sum;
return 0;
}
