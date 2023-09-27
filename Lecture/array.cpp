#include <iostream>
#include<iomanip>
using namespace std;
int main(){
	int marks[4];
	int i=1,n=0,x=0;
	while (i<=4){
	cout<<"enter marks of "<<i<<"student"<<endl;
	cin>>marks[x];
	i++;x++;	
	}
	do{
	cout<<"the marks of student:"<<marks[n]<<endl;
	n++;
	}while(n<4);
	//pointer and array
	int* a; 
	for(int y=0;y<4;y++){
		cout<<"the position of the marks:"<<a<<endl;
		a++;
	}
	return 0;
}
