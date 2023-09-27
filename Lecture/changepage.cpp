#include<iostream>
#include<windows.h>
using namespace std;
void changepage();
int main(){
	changepage();
}
void changepage(){
	system("CLS");
	system("color F2");
	cout<<"\n\n\n\t\t\tLOADING\n";
	cout<<"\t\t(";
	for(int i=1;i<=23;i++){
		cout<<"_";
	}
	cout<<")";
	cout<<"\r\t\t(";
	for(int i=1;i<=12;i++){
		if (i==12){ cout<<"-";}
		else {cout<<"--"; }
		Sleep(1000);
	}	
}
