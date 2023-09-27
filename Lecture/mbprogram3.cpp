#include<iostream>
using namespace std;
void forward(int[]);
void reverse(int[]);
int main()
{int arr[3];
cout<<"Enter three integer values=";
cin>>arr[0]>>arr[1]>>arr[2];
forward(arr);
reverse(arr);
return 0;
}
void forward(int f[]){
	cout<<"Forward order:"<<endl;
	int i=0;
	while(i<3){
	{cout<<f[i]<<endl;}
	i++;}
}
void reverse(int r[]){
	cout<<"Reverse order:"<<endl;
	int i=2;
	while(i>=0){
	{cout<<r[i]<<endl;}
	i--;}
}


