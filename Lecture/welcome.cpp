#include<cstdlib>
#include<iostream>
#include<windows.h>
#include<iomanip>
using namespace std;
void welcome();
void bell(char[]);
void line();
void time(int);
void loadingscreen();
//main function
int main(){
welcome();
loadingscreen();	
return 0;
}
//welcome function
void welcome(){
system("CLS");
system("COLOR 02");
cout<<"\t\t\t\tASSALAM-U-ALAIKUM:)\n";
char a[]="WELCOME TO OUR HSR INSTITUTION";
bell(a);
char b[]="ADDMISSION FALL 2021";
bell(b);
cin.get();
}
//bell or typing sound
void bell(char arr[]){
	cout<<"\n\n\t\t\t";
	int len=strlen(arr);
	for(int i=0;i<len;i++){
		cout<<arr[i];
		if(arr[i]!=' ')
		{Beep(300,100);}
		Sleep(200);
	}
	cout<<"\n\t\t\t";
	for(int i=0;i<len;i++)
	{cout<<"_";}
}
//loading screen function
void loadingscreen()
{system("color 02");
for(int a=17;a>=1;a=a-2){
	time(a);
	Sleep(1000);
	system("CLS");	
	}
}
//display line
void line(){
	cout<<"\t\t ";
	for(int i=1;i<=19;i++){
		cout<<"-";
	}
	cout<<endl;
}
//basic loading function
void time(int a){
	cout<<"\t\t\tPLEASE WAIT\n";
	cout<<"\t\t\tLOADING\n\n";
	line();
	int space=1;
	for(int i=17;i>=1;i=i-2){
		cout<<"\t\tI";
		cout<<setw(space)<<"\\";
		for(int j=1;j<=i;j++){
			if(i<a)
			{ cout<<"*";}
			else cout<<" ";
		}
	cout<<"/"<<setw(space)<<"I"<<endl;	
	space++;	
	}
	
	space=9;
	for(int i=1;i<=17;i=i+2){
		cout<<"\t\tI";
		cout<<setw(space)<<"/";
		for(int j=1;j<=i;j++){
			if(i>a-2)
			cout<<"*";
			else cout<<" ";
		}
	cout<<"\\"<<setw(space)<<"I"<<endl;
	space--;
	}
	line();
}

