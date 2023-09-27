#include<iostream>
using namespace std;
void callbyval(int);
void callbyref(int &);
int main ()
{
	int num=5;
	callbyval(num);
	cout<<num<<endl;
	callbyref(num);
	cout<<num;
	

}
void callbyval(int num)
{
	num=num*num;
}
void callbyref(int &num)
{
	num=num*num;
}
