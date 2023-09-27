#include<iostream>
#include<windows.h>
using namespace std;
int main(){
	for(int i=0;i<=3;i++){ //for loop 
	int a=0;
	start:
	if(a!=i){cout<<"\t";a++;goto start;}
	cout<<"MCS\a\n";
	Sleep(500);
}
}
