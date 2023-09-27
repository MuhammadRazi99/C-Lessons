#include<iostream>
#include<cstring>
using namespace std;
int modify(string); //prototype
int main()
{
 string s;
 cout<<"Enter characters and i will remove all the duplicate characters:\n";
 getline(cin,s);
 cout<<"Modify string size="<<modify(s)<<endl; //calling modify function
}
int modify(string str) //definition
{	//str.length to find the length of the function
	for(int i=0;i<str.length();i++)
	{bool count=false;
		for(int j=0;j<str.length();j++)
		{//str.erase to remove the character from the string
			if((str[i]==str[j])&&(count==true))
			{str.erase(j,1);}
			else if((str[i]==str[j])&&(count==false))
			{count=true;}
			else continue; 
		}
	}
	cout<<"string="<<str;
	return str.length();
}
