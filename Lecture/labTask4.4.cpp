#include<iostream>
using namespace std;
int main(){
	int num,sum=0;
	cout<<"Enter any value:";
	cin>>num;
	for(int i=1;i<=num;i++){
		sum+=i;
	}
	cout<<"Sum of the integers from 1 to "<<num<<" is:"<<sum;
return 0;
}
