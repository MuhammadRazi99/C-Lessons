#include<iostream>
using namespace std;
int main(){//INPUT FROM USER
	int val,i=0,sum=0;
	cout<<"Enter any value:";
	cin>>val;
	do{ //LOOP
		sum+=i;
		i++;
	}while(i<=val);
	//OUTPUT
	cout<<"Sum of the integers from 0 to "<<val<<" is:"<<sum;
return 0;
}
