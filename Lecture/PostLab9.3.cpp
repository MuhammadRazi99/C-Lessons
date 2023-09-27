#include<iostream>
#include<iomanip>
using namespace std;
//prototypes
void task101(float[][7]);
void task102(int[][4]);
int main()
{
//task 10.1: Delecation initializing and printing two dimension arrays
float zero[7][7]={0};
task101(zero);	
//task 10.2: Storing  values into two dimensional Arrays
int data[2][4];
task102(data);
return 0;
}
void task101(float arr[7][7]) //definition of Lab Task 10.1
{	cout<<"\t\tLab task 10.1\n";
	cout<<"\t\t-------------\n\n"; 
	cout<<"The (7x7) Array:\n";
	for(int i=0;i<7;i++)
	{
		for(int j=0;j<7;j++)
		{cout<<arr[i][j]<<" ";}
		cout<<endl;
	}
	cout<<endl;
}
void task102(int arr[][4]) //definition of Lab Task 10.2
{	cout<<"\t\tLab task 10.2\n";
	cout<<"\t\t-------------\n\n";
	cout<<"Enter values for 2 rows and 4 columns.\n";
	//Input data from user
	for(int i=0;i<2;i++)
	{
		cout<<"Enter value for row "<<i<<" :\n";
		for(int j=0;j<4;j++)
		{
			cout<<"location ["<<i<<"]["<<j<<"]:";
			cin>>arr[i][j];
		}
	}
	//Output
	cout<<"Your stored data:\n";
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<4;j++)
		{cout<<setw(4)<<arr[i][j]<<" ";}
		cout<<endl;
	}	
}
