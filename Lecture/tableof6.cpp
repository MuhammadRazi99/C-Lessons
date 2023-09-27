#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int i=1;
	do{
	cout<<"6*"<<setw(2)<<i<<"="<<setw(3)<<6*i<<endl;
	i++;
	}while(i<=20);
	for (int x=1;x<21;x++){
	cout<<"7*"<<setw(2)<<x<<"="<<setw(3)<<7*x<<endl;	
	}
	int n=1;
	while(n<=20){
	cout<<"8*"<<setw(2)<<n<<"="<<setw(3)<<8*n<<endl;
	n++;	
	}
	return 0;
}
