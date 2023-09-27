#include<iostream>
#include<iomanip>
#include<windows.h>
void line();
void time(int);
void loadingscreen();
using namespace std;
int main(){
	loadingscreen();	
   }
void loadingscreen()
	{ for(int a=19,b=1;a>=1;a=a-2,b++){
	if(b%2==0){system("color 02");}
	else {system("color F2");}	
	time(a);
	Sleep(1000);
	system("CLS");	
	}
}
void line(){
	cout<<"\t\t ";
	for(int i=1;i<=19;i++){
		cout<<"-";
	}
	cout<<endl;
}
void time(int a){
	cout<<"\t\tPLEASE WAIT\n";
	cout<<"\t\tLOADING\n\n";
	line();
	int space=1;
	for(int i=17;i>=1;i=i-2){
		cout<<"\t\tI";
		cout<<setw(space)<<"\\";
		
		for(int j=1;j<=i;j++){
			if(i>=a)
			{ cout<<" ";
			goto skip; }
			cout<<"*";
			skip:;
		}
	cout<<"/"<<setw(space)<<"I"<<endl;	
	space++;	
	}
	
	space=9;
	for(int i=1;i<=17;i=i+2){
		cout<<"\t\tI";
		cout<<setw(space)<<"/";
		
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
	cout<<"\\"<<setw(space)<<"I"<<endl;
	space--;
	}
	line();
}
