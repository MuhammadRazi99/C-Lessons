#include<iostream>
using namespace std;
void input(int[],int);
bool equal(int [],int []);
int main(){
	int arr1[5],arr2[5];
	input(arr1,1);
	input(arr2,2);
	if(equal(arr1,arr2)){
		cout<<"same and equal array\n";
	}
}
void input(int a[],int b){
	cout<<"Enter the values of "<<b<<"array\n";
	for(int i=0;i<5;i++){
		cout<<"Enter the "<<i<<"th value=";
		cin>>a[i];
	}
}
bool equal(int num1[5],int num2[5]){
	for(int i=0;i<5;i++){
		bool c=false;
		for(int j=0;j<5;j++){
			if(num1[i]==num2[j]){
				c=true;
				break;
			}
		}
		if(!c){
			cout<<"not same array";
			return 0;
		}
	}
	return 1;
}
