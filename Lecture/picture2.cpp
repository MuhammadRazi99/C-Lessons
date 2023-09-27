#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	cout<<"\t\t\t\\/\t\\/"<<endl;
	int space=3;
	for(int i=1; i<=5;i=i+2){
		cout<<setw(space);
		space--;
		cout<<"/";
		for(int j=1; j<=i; j++){
			cout<<"*";
		}
		cout<<"\\";
		for(int n=1; n<=i; n++){
			cout<<"*";
		}
		cout<<"\\"<<endl;
	}
	cout<<"--------------"<<endl<<endl;
	cout<<"_____________________________________________"<<endl;
	cout<<"_____________________________________________"<<endl<<endl;
	
	cout<<"--------------"<<endl;	
		space=1;
	for(int i=5; i>=1;i=i-2){
		cout<<setw(space);
		space++;
		cout<<"\\";
		for(int j=1; j<=i; j++){
			cout<<"*";
		}
		cout<<"/";
		for(int n=1; n<=i; n++){
			cout<<"*";
		}
		cout<<"/"<<endl;
	}
		cout<<"\t\t\t\\/\t\\/"<<endl<<endl;
	
	cout<<"_____________________________________________"<<endl;
	cout<<"_____________________________________________"<<endl;
	
}
