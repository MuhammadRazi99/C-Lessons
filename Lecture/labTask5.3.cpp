#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	int counter=0;
	for(int i=0;i<10;i++)
		{
		for(int j=0;j<10;j++)
			{
			for(int k=0;k<10;k++)
				{
				for(int l=0;l<10;l++)
					{
					for(int m=0;m<10;m++)
						{
						for(int n=0;n<10;n++)
							{
							for(int o=0;o<10;o++)
								{
								for(int p=0;p<10;p++)
									{
									for(int q=0;q<10;q++)
										{
										cout<<i<<j<<k<<l<<m<<n<<o<<p<<q<<endl;
										//Sleep(100);
										}
									}
								}		
							}
						}
					}
				}	
			}
	cout<<endl;
		}
	return 0;
}
