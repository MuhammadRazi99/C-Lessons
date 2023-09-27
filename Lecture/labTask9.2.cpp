#include<iostream>
using namespace std;
int main(){
	int Int_Arr[6]={12,12,12,12,12,12};
	float Float_Arr[5]={0.5,0.5,0.5,0.5,0.5};
	char Char_Arr[4]={'a','a','a','a'};
	cout<<"INTEGER ARRAY=";
	for(int i=0;i<6;i++){
		cout<<Int_Arr[i]<<" ";
	}
	cout<<"\nFLOAT ARRAY=";
	for(int i=0;i<5;i++){
		cout<<Float_Arr[i]<<" ";
	}
	cout<<"\nCHARACTER ARRAY=";
	for(int i=0;i<4;i++){
		cout<<Char_Arr[i]<<" ";
	}
}
