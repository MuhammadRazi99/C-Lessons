#include<iostream>
using namespace std;
//prototypes
bool error(char[]); //if user enter character other than alphabets
int max(int[]); //returns the maximun value
void display(char[][10],int[],int); //displays the highest value string
int main()
{
	int sum[5]={0};
	char value[5][10];
		cout<<"Enter only characters (max 9 characters) \n";
		for(int i=0;i<5;i++)
		{
		repeat:	
		cin.getline(value[i],10);
		if(error(value[i]))
		{cout<<"Invalid input\nEnter only alphabets:";goto repeat;}
		}
	//calculating the value of the string	
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<9;j++)
		{
		if(value[i][j]=='\0')
		{break;}
		else 
		{sum[i]+=int(tolower(value[i][j]))-96;}
		}
	}
	int maxValue=max(sum); //calling
	display(value,sum,maxValue); //calling
	return 0;
}
bool error(char s[]) //definition
{
	for(int i=0;i<9;i++)
	{
	if(s[i]=='\0')
	{break;}
	else if(int(s[i])<65||(int(s[i])>90&&int(s[i])<97)||int(s[i])>122)//other than alphabets
	{return true;}
	else continue;	
	}
	return false;
}
int max(int sum[]) //definition
{
	int max=sum[0];
	for(int i=0;i<5;i++)
	{	
		if(max<sum[i])
		{max=sum[i];}	
	}
	return max;
}
void display(char value[][10],int sum[],int max) //definition
{
	cout<<"Highest value string:\n";
	for(int i=0;i<5;i++)
	{
	if(max==sum[i])
	{cout<<value[i]<<endl;}	
	}
}
