#include<iostream>
using namespace std;
int max(int[],int);
void finder(int[],int,int);	
int main(){
	int const size=10;
	int a[size];
	int i=0;
	while(i<size){
		cout<<"location ["<<i<<"]=";
		cin>>a[i];
		i++;
	}
	int maxium=max(a,size);
	finder(a,maxium,size);
}
int max(int x[],int size){
	int i=0;
	int max=x[0];
	while(i<size){
		if(max<x[i]){
			max=x[i];
		}
		i++;
	}
	return max;
}
void finder(int y[],int n,int size){
	int i=0;
	while(i<size){
		if(y[i]==n){
			cout<<"maximum at location["<<i<<"]="<<endl;
		}
	i++;
	}
}
