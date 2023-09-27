#include<iostream>
using namespace std;
int find(int no,int arr[][3]){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(no==arr[i][j]){
				cout<<"Present"<<endl;
				return 0;
			}
		}
	}
	cout<<"Absent"<<endl;
	return 0;
}
int main(){
int no,arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
cout<<"Enter a digit:";
cin>>no;
find(no,arr);
return 0;
}
