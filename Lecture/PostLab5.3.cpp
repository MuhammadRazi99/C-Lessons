#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int N,sum=0;
	cout<<"ENTER A NUMBER=";//INPUT FROM USER
	cin>>N;
	cout<<"Sum=";
	for(int i=1;i<=N;i++)
	{//loop from 1 to that number
		cout<<" "<<i<<"^"<<i;
	//this is only the printing format or formula printing
		if(i!=N) cout<<" + ";
	//so that it will print + at the end
		sum=sum+pow(i,i);//MAIN FORMULA
	}
	cout<<"="<<sum; //OUTPUT
	return 0;
}
