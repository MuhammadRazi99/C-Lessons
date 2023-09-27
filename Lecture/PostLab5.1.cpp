#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	for(int i=1;i<=12;i++)
	{//loop from 1 to 12
	//they are the table number
	for(int j=1;j<=12;j++){
	//loop from 1 to 12
	//they are the multiplys to that table number	
		cout<<setw(3)<<i*j<<" ";//MAIN FORMULA AND OUTPUT
	//setw is used to make it look presentable	
	}	
	cout<<endl;
	}
}
