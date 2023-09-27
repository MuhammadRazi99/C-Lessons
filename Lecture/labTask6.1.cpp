#include<iostream>
using namespace std;
void separator(); //declaration
void multiples(int);//delaration

int main(){
	int num;
	cout<<"Enter integer:";
	cin>>num;
	multiples(num);//calling multiples
	return 0;
}
void separator(){ //defination
	cout<<endl;
	for(int i=0;i<15;i++){
		cout<<"*";
	}
	cout<<endl;
}
void multiples(int N){ //defination
	for(int i=1;i<=N;i++){
		for(int j=1;j<=10;j++){
			cout<<i*j<<" ";
		}
		separator(); //calling separator
	}
}
