#include<cstdlib>
#include<iostream>
#include<cstring>
#include<windows.h>
using namespace std;
void bell(char[]);
int main(){	
system("CLS");
system("COLOR 02");
cout<<"\t\t\t\tASSALAM-U-ALAIKUM\n";
char a[]="WELCOME TO OUR HSR INSTITUTION";
bell(a);
char b[]="ADMISSION FALL 2021";
bell(b);
cout<<"\n\t\t\t___________________";
//cin.get();
return 0;
}
void bell(char arr[]){
	cout<<"\n\n\t\t\t";
	int len=strlen(arr);
	for(int i=0;i<len;i++){
		cout<<arr[i];
		if(arr[i]!=' ')
		{Beep(300,100);}
		Sleep(200);
	}
}
