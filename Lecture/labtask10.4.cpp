#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
void IndexChecker(int[][10],int);
int main(){
	srand(time(NULL));
	int RandomNo,num;
	int array[10][10];
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			RandomNo=rand()%10;
			array[i][j]=RandomNo;
		}
	}
	cout<<"Enter a number between 1-9=";
	cin>>num;
	IndexChecker(array,num);
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			cout<<array[i][j]<<" ";
		}
		cout<<endl;
	}
	
}
void IndexChecker(int a[][10],int num){
int sum=0;
for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			if(a[i][j]==num){
				cout<<"Found at location ["<<i<<"]["<<j<<"]\n";
				sum++;
			}
		}
		cout<<endl;
	}	
	cout<<sum<<" instances found.\n";
}
