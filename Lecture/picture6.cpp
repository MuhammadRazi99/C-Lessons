#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
	for (int i=1;i<=10;i++)
	{
		cout<<setw(10);
		for (int j=1;j<=15;j++)
		{
			if (i==6 && j==11 || i==6 && j==12 || i==6 && j==13 || i==6 && j==14 || i==1 && j==1 || i==1 && j==2 || i==1 && j==3 || i==1 && j==4 || i==1 && j==5 || i==10 && j==2 || i==10 && j==3 || i==10 && j==4 || i==10 && j==5)
			{
				cout<<"  ";
			}
			else if(i==1 || i==6 || i==10 || j==6 || j==15)
			{
				cout<<"* ";
			}
			else if (i==1 && j==6 || i==1 && j==15 || i==2 && j==5 || i==2 && j==14 || i==3 && j==4 || i==3 && j== 13 || i==4 && j==3 || i==4 && j==12 || i==5 && j==2 || i==5 && j==11 || i==6 && j==1 || i==6 && j==10 || i==7 && j==1 || i==7 && j==10 || i==8 && j==1 || i==8 && j==10 || i==9 && j==1 || i==9 && j==10 || i==10 && j==1 || i==10 && j==10)
			{
				cout<<"* ";
			}
			else
			{
			    cout<<"  ";
		    }
		}
		cout<<endl;
	}
	for (int i=1;i<=5;i++)
	{
		cout<<setw(10);
		for (int j=1;j<=15;j++)
		{
			if (i==1 && j==6 || i==1 && j==15 || i==2 && j==6 || i==2 && j==15 || i==3 && j==6 || i==3 && j==15 || i==4 && j==6 || i==4 && j==15 || i==5 && j==11 || i==5 && j==12 || i==5 && j==13 || i==5 && j==14 || i==5 && j==15)
			{
				cout<<"  ";
			}
			else if (i==5 || j==1 || j==6 ||j==15)
			{
			    cout<<"* ";
		    }
		    else if (i==1 && j==5 || i==1 && j==10 || i==1 && j==14 || i==2 && j==4 || i==2 && j==10 || i==2 && j==13 || i==3 && j==3 || i==3 && j==10 || i==3 && j== 12 || i==4 && j==2 || i==4 && j==10 || i==4 && j==11)
			{
				cout<<"* ";
	        }
		    else
		    {
		    	cout<<"  ";
			}
		}
		cout<<endl;
	}
}
