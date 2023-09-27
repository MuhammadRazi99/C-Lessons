#include<iostream>
using namespace std;

int total(int);//declaration

int main(){
	int num;
	cout<<"Enter the number:";
	cin>>num;
	cout<<"="<<total(num);
return 0;	
}
int total(int num){
	int N=0;
	for(int i=1;i<=num;i++)
	{
		int sum=0;
		for(int j=1;j<=i;j++)
	{	
		sum+=j;
	}
	if (i<num) {cout<<sum<<"+";}
	else {cout<<sum;} 
	N+=sum;
	}
	return N;
}
