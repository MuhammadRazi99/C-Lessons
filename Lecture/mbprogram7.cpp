#include<iostream>
using namespace std;
int main()
{int num[4],lcm=1;
cout<<"Enter four integers=";
cin>>num[0]>>num[1]>>num[2]>>num[3];
int l=num[0];
for(int i=0;i<4;i++)
{
	if(l>num[i])
	{l=num[0];}
}
for(int i=1;i<=l;i++){
if((num[0]%i==0)&&(num[1]%i==0)&&(num[2]%i==0)&&(num[3]%i==0))
{lcm=i;}	
}
cout<<"LCM="<<lcm<<endl;
return 0;
}

