#include<iostream>
#include<windows.h>
using namespace std;
//prototypes
void display(char[][3]);
bool check(char[][3],char);
bool error(char[][3],int,int);
int main(){
	string  first,second;//for players name
	char tiktok[3][3]={' '};
	int row,col;
	cout<<"Enter first player name:";
	getline(cin,first);
	cout<<"Enter second player name:";
	getline(cin,second);
	for(int n=1;n<=9;n++)
	{
	repeat:
	display(tiktok);	
	if(n%2!=0)
	{
	cout<<first<<" TURN\nEnter row=";
	cin>>row;
	cout<<"Enter column=";
	cin>>col;
		if(error(tiktok,row,col)) //calling error checking function
		{cout<<"Invalid Input\n";
		Sleep(2000);
		goto repeat;}
	tiktok[row][col]='0';
		if(check(tiktok,'0')) //checking elligiblity to win
		{display(tiktok);cout<<"\n\t\t"<<first<<" WON :)";
		return 0;}
	}	
	else
	{
	cout<<second<<" TURN\nEnter row=";
	cin>>row;
	cout<<"Enter column=";
	cin>>col;
	if(error(tiktok,row,col)) //calling to check errors
	{cout<<"Invalid Input\n";
	Sleep(2000);
	goto repeat;}
	tiktok[row][col]='X';
	if(check(tiktok,'X')) //checking elligibility to win
	{display(tiktok);cout<<"\n\t\t"<<second<<" WON :)";
	return 0;}	
	}
	}display(tiktok); 
	cout<<"\n\t\tTIE";
	return 0;
}
void display(char tik[][3])//definition of non-returning function display
{//displays the cell or table
	system("CLS");
	cout<<"Enter the location of the cell:\n\n";
	cout<<"\n\t\t-------\n";
		for(int i=0;i<3;i++)
		{
			cout<<"\t\t|";
			for(int j=0;j<3;j++)
			{cout<<tik[i][j]<<"|";}
		cout<<"\n\t\t-------\n";
		}
	cout<<endl<<endl;	
}
bool check(char tik[][3],char a) //definition of boolean function check
{//it checks if the player is elligible to win or not
	for(int i=0;i<3;i++)
	{
		if(tik[0][i]==a&&tik[1][i]==a&&tik[2][i]==a)
		{return true;}
		else if(tik[i][0]==a&&tik[i][1]==a&&tik[i][2]==a)
		{return true;}
		else continue;
	}
	if(tik[0][0]==a&&tik[1][1]==a&&tik[2][2]==a)
	{return true;}
	else if(tik[0][2]==a&&tik[1][1]==a&&tik[2][0]==a)
	{return true;}
	else
	{return false;}
}
bool error(char tok[][3],int r,int c) //definition of boolean error
{ //it checks for the valid location of the cell
	if(r>=3||r<0)
	{return true;}
	else if(c>=3||c<0)
	{return true;}
	else if(tok[r][c]=='0'||tok[r][c]=='X')
	{return true;}
	else return false;
}
