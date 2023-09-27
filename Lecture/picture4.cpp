#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	cout<<"   ------"<<endl;
	int n=5, space=3;
	for(int a=1,c=1;a<=3;a++){
		cout<<setw(space)<<"/";
		space--;
		for(int b=1;b<=n;b++){
		cout<<"*";	
		}
		cout<<"/";
		cout<<setw(c)<<"\\";
		cout<<endl;
		c=c+2;
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

