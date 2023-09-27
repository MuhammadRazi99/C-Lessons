#include<iostream>
#include<iomanip>
using namespace std;
void direction(int);
int main(){
	int num;
	cout<<"Enter a number no=";
	cin>>num;
	if(num%2==0) num--;
	int a=num/2;
	direction(a);
	//direction(a,a,1);
	
return 0;
}
void direction(int a){
	int space=1;
	for(int i=1;i<=a+1;i++)
	{
		cout<<setw(space);
		if (space==a) space--;
		else space++;
		for(int j=1;j<=i;j=j+2)
		{
			cout<<"*";	
		}
		cout<<endl;
	}
	space=a;
	for(int i=a;i>=1;i--)
	{
		cout<<setw(space);
		if (space==a) space--;
		else space++;
		for(int j=1;j<=i;j=j+2)
		{
			cout<<"*";	
		}
		cout<<endl;
	}
}
