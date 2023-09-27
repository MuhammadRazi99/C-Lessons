#include<iostream>
using namespace std;
int main(){
	int space=10;
	for(int i=1;i<=3;i++)
	{
		for(int k=space;k>0;k--){
			cout<<" ";
		}
		space--;
		for(int j=1;j<=2*i-1;j++)
		{
			cout<<"*";	
		}
		cout<<endl;
	}
 return 0;	
}
