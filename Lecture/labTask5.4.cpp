#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int num;
	cout<<"Enter a number no=";
	cin>>num;
	if(num%2==0) num--;
	int space=num/2+1;
	for(int i=1;i<=num;i=i+2)
	{
		cout<<setw(space);
		space--;
		for(int j=1;j<=i;j++)
		{
			cout<<"*";	
		}
		cout<<endl;
	}
	space=2;
	for(int i=num-2;i>=1;i=i-2)
	{
		cout<<setw(space);
		space++;
		for(int j=1;j<=i;j++)
		{
			cout<<"*";	
		}
		cout<<endl;
	}
return 0;
}
