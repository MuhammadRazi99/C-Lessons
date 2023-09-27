#include<iostream>
#include<cmath>
using namespace std;

int trinum(int num){
	if(num==1){
		return 1;
	}
	else{
		return num+trinum(num-1);
	}
}
int factorial(int num){
	if(num==1)
	{return 1;}	
	else 
	{return num*factorial(num-1);}
}
int fibonacci(int num){
	if(num==0||num==1)
	{return num;}
	else
	{return fibonacci(num-1)+fibonacci(num-2);}
}
void reverseNo(int num){
	if(num==0){
		return;
	}
	else{
		cout<<num%10;
		reverseNo(num/10);
	}
}
int sumOfArray(int arr[],int size){
	if (size==0)
	{return 0;}
	else 
	{return sumOfArray(arr,size-1)+arr[size-1];}
}
int maxNo(int arr[],int max,int size){
	if(size==0)
	{return max;}
	else{
		if(max<arr[size-1])
		{max=arr[size-1];}
		maxNo(arr,max,size-1);
		return max;
	}
}
int minNo(int arr[],int min,int size){
	if(size==0)
	{return min;}
	else{
		if(min>arr[size-1])
		{min=arr[size-1];}
		minNo(arr,min,size-1);
		return min;
	}
}
int ReverseNo(int num){
	if(num<10&&num>=0)
	{return num%10;}
	else{
		return (pow(10,int(log10(num)))*int(num%10))+ReverseNo(num/10);
	}
}

int main(){
//cout<<trinum(10)<<endl;
//cout<<fibonacci(5)<<endl;
//reverseNo(123);
//cout<<endl;
//int arr[5]={1,2,3,4,5};
//cout<<sumOfArray(arr,5)<<endl;
//cout<<maxNo(arr,arr[0],5)<<endl;
//cout<<minNo(arr,arr[0],5)<<endl;
cout<<ReverseNo(123)<<endl;


return 0;
}

