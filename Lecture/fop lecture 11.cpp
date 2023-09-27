#include<iostream>
#include<string.h>
using namespace std;
void print(int);
float avg(const int,int[]);
float func(float[][4],int);
const int size=5;
int main(){
	/*char arr[]="Ali\0";
	cout<<sizeof(arr)<<endl;
	cout<<strlen(arr);*/
	
	// it has a space terminating character
	/*char arr[10];
	cout<<"Enter name=";
	cin>>arr;
	cout<<arr;*/
	
	//does not take space as a terminating character
	/*char arr[10];
	cout<<"Enter name";
	cin.getline(arr,10);
	cout<<arr;*/
	
	//copy an array into another array
	/*char arr[5]="Asad";
	char arr1[5]="Ali";
	strcpy(arr,arr1);
	cout<<arr<<endl;
	cout<<arr[5]<<endl;
	cout<<arr1;*/ 
	
	/*int array[size]={1,3,5,7,9};
	for(int index=0;index<size;index++)
	{
		print(array[index]);
	}*/
	
	/*int arr[5]={1,3,5,7,9};
	float average=avg((sizeof(arr)/sizeof(arr[0])),arr);
	cout<<average;*/ 

float news[3][4]={{1.0,2.0,3.0,4.0},{1.0,2.0,3.0,4.0},{1.0,2.0,3.0,4.0}};
int c=sizeof(news)/sizeof(news[0]);	
func(news,c/4);
	
}

float func(float array[][4],int size){
	int sum=0;
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<array[i][j]<<endl;
			sum+=array[i][j];
			
		}
	}	
	cout<<sum;
}

float avg(int a,int array[])
{
	int b=0;
	for(int i=0;i<a;i++){
		b+=array[i];
	}
	return b/a;
}

void print(int num)
{
	cout<<num*num<<endl;
}
