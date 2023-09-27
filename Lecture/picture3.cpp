#include<iostream>
#include<iomanip> 
using namespace std;
int main(){
	int space=7;
	for(int a=1;a<=12;a=a+2){
	cout<<setw(space);
	space--;
	for(int b=1;b<=a;b++){
		cout<<"*";
	}
	cout<<endl;
	}
	for(int l=1;l<=13;l++){
		cout<<"-";
	}
	cout<<endl;
	for(int i=1;i<=5;i++){
		cout<<"|";
		for(int j=1;j<=5;j++){
		cout<<"*";	
		}
		cout<<"|";
		for(int k=1;k<=5;k++){
		cout<<"*";	
		}
		cout<<"|";
		cout<<endl;
	}
	for(int l=1;l<=13;l++){
		cout<<"-";
	}
}
