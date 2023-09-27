#include<iostream>
using namespace std;
void add(int,int);//declaration
int sub(int,int);
void calc(int,int);
int main(){
	int a=4;
	int  b=5;
	calc(a,b);
return 0;	
}
void add(int a,int b)//definition
{
	int sum=a+b;
	cout<<"sum:"<<sum<<endl;
}
int sub(int a,int b)//definition
{
	int ans=a-b;
	return ans;
}
void calc(int a,int b){
	add(a,b);//call
	cout<<"*****\n";
	int ans=sub(a,b);
	cout<<"sub:"<<ans<<endl;
	cout<<"------"<<endl;
}
