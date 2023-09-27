#include<iostream>
#include<cstring>
using namespace std;
//prototypes
void copy(char[],char[]);
void compare(char[],char []);
void concatenate(char [],char[]);
void length(char[],char[]);
int main()
{int choose;
char s1[100],s2[100];
cout<<"Enter a string :";
cin.getline(s1,100);
cout<<"Enter another string:";
cin.getline(s2,100);
repeat:
cout<<"Choose between the following:\n1.copy\n2.compare\n3.concatenate\n4.length\nEnter the choice number=";
cin>>choose;	
switch(choose)
{
case 1:
copy(s1,s2);
break;
case 2:
compare(s1,s2);
break;
case 3:
concatenate(s1,s2);
break;
case 4:
length(s1,s2);
break;
default:
cout<<"Enter number from 1-4 only."<<endl;
goto repeat; 	
}
return 0;
}
void copy(char a1[],char a2[]){
	strcpy(a1,a2); //copy from second string to first string
	cout<<"first string="<<a1<<endl;
	cout<<"second string="<<a2<<endl;
}
void compare(char a1[],char a2[]){
	int c=strcmp(a1,a2); //campare two values lexiographically
	if(c>0){cout<<"First string is greater with the difference of "<<c<<".\n";}
	else if(c<0){cout<<"First string is lesser with the difference of "<<c<<".\n";}
	else {cout<<"Both strings are identical.\n";}
}
void concatenate(char a1[],char a2[]){
	strcat(a1,a2); // concatenate two strings in the single first string
	cout<<"first string="<<a1<<endl;
	cout<<"second string="<<a2<<endl;
}
void length(char a1[],char a2[]){ //Gives the length of the string
	cout<<"first string length="<<strlen(a1)<<endl;
	cout<<"second string length="<<strlen(a2)<<endl;
}
