#include<iostream>
#include<cstring>
using namespace std;
void ConvertToLower(char[]); //prototype
int main()
{
char s[100];
cout<<"Enter the string:";
cin.getline(s,100);
ConvertToLower(s); //calling
return 0;
}
void ConvertToLower(char a[]) //defination
{//convert uppercase alphabets into lowercase
	for(int i=0;i<strlen(a);i++)
	{
		if(isupper(a[i]))
		{a[i]=tolower(a[i]);}
	}
	cout<<"modified string="<<a<<endl;
}
