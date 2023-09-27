#include<iostream>
using namespace std;
int main(){
	bool a=true;
	int check;
	int Arr[15]={12,23,423,434,23,5,1,5,32,55,23,4,66,3,7};
	cout<<"Enter an integer value and I'll tell you if it exists in the integer array or not:";
	cin>>check;
	for(int i=0;i<15;i++){
		if(Arr[i]==check){
			if (a){
				cout<<check<<" is found at index ";
			}
			a=false;
			cout<<"["<<i<<"]";
		}
	}
	if(a){	
	cout<<"Record not found";
	}
	
}
