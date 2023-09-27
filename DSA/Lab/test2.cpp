#include<iostream>
using namespace std;
//selection sort
void selectionSort(int arr[],int size){
	int min,temp;
	for(int i=0;i<size-1;i++){
		min=i;
		for(int j=i+1;j<size;j++){
			if(arr[min]>arr[j]){
				min=j;
			}
		}
		temp=arr[min];
		arr[min]=arr[i];
		arr[i]=temp;
	}
}
void bubbleSort(int arr[],int size){
	int temp;
	bool flag;
	for(int i=0;i<size-1;i++){
		flag=true;
		for(int j=0;j<size-i-1;j++){
			if(arr[j]<arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				flag=false;
			}
		}
		if(flag)
		{break;}
	}
}
void insertionSort(int arr[],int size){
	int key,i,j;
	for(i=1;i<size;i++){
		key=arr[i];
		j=i-1;
		while(j>=0&&arr[j]>key){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
}
int main(){
int arr[5]={1,4,6,10,0};
insertionSort(arr,5);
for(int i=0;i<5;i++){
	cout<<arr[i]<<" ";
}
return 0;
}

