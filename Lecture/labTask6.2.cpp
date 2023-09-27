#include<iostream>
using namespace std;
int perfectno(int);
int main(){
	int num;
	cout<<"Enter the number=";
	cin>>num;
	cout<<"Perfect numbers between 1 and "<<num<<":\n";
	for(int i=1;i<=num;i++){	
	int c=perfectno(i);
	if(c!=0)
	{cout<<c<<"--";
	for(int i=1;i<=c/2;i++){
		if(c%i==0){cout<<i<<",";}
	}
	cout<<endl;
	}
	}
}
int perfectno(int N){
	int sum=0;
	for(int i=1;i<=N/2;i++){
		if(N%i==0)
		{sum=sum+i;}
	}
	if (sum==N){return N;}
	else return 0;
}
