#include<iostream>
#include<cmath>
using namespace std;
bool check(string);
int main()
{string num;
cout<<"Enter a number=";
cin>>num;
if(check(num))
{cout<<"Given number is Palindrome"<<endl;}
else 
{cout<<"Not a Palindrome Number"<<endl;}
return 0;
}
bool check(string pal){
	if (pal.length()%2==0)
	{return false;}
	for(int i=0,j=pal.length()-1;i<=ceil(pal.length()/2);i++,j--){
		if(pal[i]!=pal[j])
		{return false;}
		else continue;
	}
	return true;
}
