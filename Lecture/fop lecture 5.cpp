#include<iostream>
using namespace std;
int main(){
	//this is the first program
	/*int x,y;
	for(x=1,y=1;x<=2,y<=5;x++,y++)
	{
		cout<<x<<"*"<<y<<"="<<x*y<<endl;
	}*/

	/*int num=1;
	while (num<=5)
	{
		cout<<"Hello World\n";
		num++;
	}*/
	
/*	cout<<"number\t number squre"<<endl;
	cout<<"---------------------"<<endl;
	for(int a=1;a<=10;a++)
	{
		cout<<a<<"\t|\t"<<a*a<<endl;
	}
*/
 
 int num;
 cout<<"Enter a number less than 10=";
 cin>>num;
 while(num>=10)
 {
 	cout<<"Invalid Entry :( Enter a number which is less 10=";
 	cin>>num;	
	 }	
	cout<<"you have entered a number less than 10\n" ;
	cout<<num;
	return 0;
}


