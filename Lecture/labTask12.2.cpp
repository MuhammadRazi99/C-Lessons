#include<iostream>
#include<cstring>
using namespace std;
void ConvertToUpper(char[]); //prototype
int main()
{
char s[100];
cout<<"Enter the string:";
cin.getline(s,100);
ConvertToUpper(s); //calling
return 0;
}
void ConvertToUpper(char a[]) //defination
{//converts lowercase alphabets into uppercase
	for(int i=0;i<strlen(a);i++)
	{
		if(islower(a[i]))
		{a[i]=toupper(a[i]);}
	}
	cout<<"modified string="<<a<<endl;
}
