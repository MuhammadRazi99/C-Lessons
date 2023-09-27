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
			if(arr[j]>arr[j+1]){
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
		while(j>=0&&arr[j]<key){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
}

int merge(int Arr[],int left,int right, int mid){
	int m=mid-left+1, n=right-mid;
	int leftArray[m],rightArray[n];
	
	for(int i=0;i<m;i++)
	{leftArray[i]=Arr[i+left];}
	
	for(int j=0;j<n;j++)
	{rightArray[j]=Arr[mid+j+1];}
	
	int i=0,j=0,k=left;
	
	while(i<m&&j<n){
		if(leftArray[i]<=rightArray[j])
		{Arr[k++]=leftArray[i++];}
		else
		{Arr[k++]=rightArray[j++];}
	}
	
	for(;i<m;i++)
	{Arr[k++]=leftArray[i];}
	
	for(;j<n;j++)
	{Arr[k++]=leftArray[j];}
}


void mergeSort(int arr[],int begin,int end){
if(begin>end){
	return;
}
int mid=(begin+end)/2;
mergeSort(arr,begin,mid);
mergeSort(arr,mid,end);
merge(arr,begin,end,mid);
}
void binarySearch(int a[],int l,int r,int value){
	int mid=(r+l)/2;
	if(r>=l){
		if(a[mid]==value){
		cout<<"value found at="<<mid<<endl;
		return;
		}
	
		else if(a[mid]>value)
		{binarySearch(a,l,mid,value);return;}
		
		else
		{binarySearch(a,mid,r,value);return;}	
	}
	cout<<"could not find value"<<endl;
	return;
}

int main(){
int arr[5]={1,6,4,10,5};
insertionSort(arr,5);
for(int i=0;i<5;i++){
	cout<<arr[i]<<" ";
}
cout<<endl;
binarySearch(arr,0,5,11);
return 0;
}

