#include<iostream>
using namespace std;
void printStar(int);//prototype
int main(){
	int arr1[5],arr2[5];
	//Entering the values on the first array
	cout<<"Enter the interger value in first array\n";
	for(int i=0;i<5;i++){
		cout<<"Enter value at the index["<<i<<"]=";
		cin>>arr1[i];
	}
	//Coping from first array to another,reading second array and displaying stars on the next line
	for(int i=0;i<5;i++){
		arr2[i]=arr1[i];  //coping
		cout<<"index["<<i<<"]="<<arr2[i] <<endl; //reading
		printStar(arr2[i]); //displaying star
	}
	
}
void printStar(int a){//definition of printstar function
	int r=1;
	while(r<=a){
		cout<<"*";
		r++;
	}
	cout<<endl;
}
