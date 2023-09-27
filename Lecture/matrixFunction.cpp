#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int array1[3][3]={{1,2,3,},{4,5,6},{7,8,9}};
	int array2[3][3]={{1,2,3,},{4,5,6},{7,8,9}};
	//Addition(array1,array2);	
	/*for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
	cout<<setw(3)<<array1[i][j]+array2[i][j];
	}
	cout<<endl;	
	}*/
	//subtraction
	/*for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
	cout<<setw(3)<<array1[i][j]-array2[i][j];
	}
	cout<<endl;	
	}*/
	//multiply with constant no
	for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
	cout<<setw(3)<<array1[i][j]*5;
	}
	cout<<endl;	
	}
}
