#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string countries[5];
cout<<"Enter the name of the countries:"<<endl;
for(int i=0;i<5;i++){
	getline(cin,countries[i]);
}
for(int i=0;i<5;i++)
{
	for(int j=0;j<4;j++)
	{
	if(int(tolower(countries[j][0]))>int(tolower(countries[j+1][0])))
	// Alphabeting from first character
	{
	swap(countries[j],countries[j+1]);
	}
	if(int(tolower(countries[j][0]))==int(tolower(countries[j+1][0])))//Alphabeting from second character
	{
	int(tolower(countries[j][1]))>int(tolower(countries[j+1][1]))?swap(countries[j],countries[j+1]):swap(countries[j+1],countries[j]);
	}
	}
} 
cout<<"countries: "<<endl;
for(int i=0;i<5;i++){
	cout<<countries[i]<<" ";
}
return 0;	
}

