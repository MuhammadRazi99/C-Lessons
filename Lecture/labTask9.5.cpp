#include<iostream>
using namespace std;
int main(){
	int min,max,sum=0;
	int arr[20];
	/*in the question there is asked for initiallization but in this program i am 
	asking value from the user to get a better version.*/
	cout<<"Enter the values:";
	for(int i=0;i<20;i++){
		cin>>arr[i];
	}
	min=arr[0];
	max=arr[0];
	for(int i=0;i<20;i++)
	{ 
	if(arr[i]<min)
	{min=arr[i];}
	if(arr[i]>max)
	{max=arr[i];}
	sum+=arr[i];
	}
	cout<<"Minimum Value="<<min<<endl;
	cout<<"Maximun Value="<<max<<endl;
	cout<<"Sum="<<sum<<endl;
	cout<<"Average="<<sum/20<<endl;
}
