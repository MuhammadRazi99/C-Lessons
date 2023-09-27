#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	char r;
	cout<<"Enter a single character:";
	cin>>r;
	
	cout<<"ASCII code of the given character="<<int(r);
	return 0;
}


/*
// In getch input does not display
char a=getch();
cout<<"\n\n"<<a;

//simple input	
char a;
cin.get(a);

//simple character input
char c=getchar();
cout<<c;	

//does not require enter key
char d=getche();
cout<<"\n\n"<<d;
*/	
