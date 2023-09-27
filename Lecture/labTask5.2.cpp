#include<iostream>
#include<windows.h>
#include<iomanip>
using namespace std;
int main(){
	int i=0,j=0,k=1;
	while(i<=10)
	{
		while(j<60)
		{
			while(k<60)
			{
				cout<<i<<":"<<j<<":"<<k<<endl;
				Sleep(100);
				k++;
			}
			j++;	
		}
		cout<<endl;
		i++;
	}
 return 0;	
}
