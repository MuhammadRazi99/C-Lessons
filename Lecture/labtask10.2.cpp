#include<iostream>
using namespace std;
int main(){
	int My_Array[2][4];//declaration of array
	cout<<"Enter values"<<endl;
	for(int i=0;i<2;i++) //rows
	{
		cout<<"For row# "<<i<<endl;
		for(int j=0;j<4;j++) //coloumn
		{
			cout<<"location["<<i<<"]["<<j<<"]:";
			cin>>My_Array[i][j];
		}
	}
	cout<<"Values in arary: "<<endl;
	for(int i=0;i<2;i++) //rows
	{
		for(int j=0;j<4;j++) //coloumn
		{
			cout<<My_Array[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
