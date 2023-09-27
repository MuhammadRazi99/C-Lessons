#include<iostream>
#include<stdio.h>
using namespace std;
void ascend(int[],int);
void decend(int[],int);
int main(){
	int a;
	cout<<"Enter the size of the array=";
	cin>>a;
	int const b=a;
	int arr[b];
	cout<<"Enter the value"<<endl;
	for(int i=0;i<b;i++){
		cout<<"index["<<i<<"]=";
		cin>>arr[i];
	}
	ascend(arr,b);
	decend(arr,b);
}
void ascend(int arr[],int c){
	for(int i=0;i<c;i++){
		for(int j=0;j<c;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j+1],arr[j]);
			}
		}
	}
	cout<<"Ascending order\n";
	for(int a=0;a<c;a++){
		cout<<arr[a]<<endl;
	}	
}
void decend(int arr[],int c){
	for(int i=0;i<c;i++){
		for(int j=0;j<c;j++){
			cout<<arr[i];
			if(arr[i]>arr[j]){
				swap(arr[j],arr[i]);
			}
		}
	}
	cout<<"Decending order\n";
	for(int a=0;a<c;a++){
		cout<<arr[a]<<endl;
	}	
}

