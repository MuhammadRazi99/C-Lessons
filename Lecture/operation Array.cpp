#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int choose;
	//declaration Array
	int Arr1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int Arr2[3][3]={{9,7,3},{4,2,6},{5,8,1}};
	cout<<"CHOOSE BETWEEN THE FOLLOWING:\n";
	cout<<"1.ADDITION\n2.SUBTRACTION\n";
	cin>>choose;
	//chooseing between condition 1
	// code 35202-6254059-7
	switch(choose){
		// addition choice
		case 1:
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<setw(5)<<Arr1[i][j]+Arr2[i][j];
		} cout<<endl;
		}
		break;
		// subtraction choice
		case 2:
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<Arr2[i][j]-Arr1[i][j];
		} cout<<endl;
		}
	}
	return 0;
}
