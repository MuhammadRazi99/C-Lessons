#include<iostream>
using namespace std;
inline int product(int,int);
/* static varible is a type of variable in which value is inerials. but in 
second time excutution its value changes and not equal to the origin value.
syntax of static variable is:  static int a=0; a=a+1; here innerially value of a=0,
but when the second time the function is excuted its value changes and does not 
equal to 0 but 1. simmilarly its value changes each time.*/

int main(){
	int x,y;
	cout<<"enter two values="<<endl;
	cin>>x;
	cin>>y;
	/* the inline function is used when have a small function. and we are using it multiple
	times in the code. to save time we make the function inline function. we should not make the 
	a bigger function inline function because it will then take more time to excute. we should 
	use in case of static variable,loop,switch.*/
	
	cout<<"the product of these two numbers="<<product(x,y)<<endl;
	cout<<"the product of these two numbers="<<product(x,y)<<endl;
	cout<<"the product of these two numbers="<<product(x,y)<<endl;
	cout<<"the product of these two numbers="<<product(x,y)<<endl;
	cout<<"the product of these two numbers="<<product(x,y)<<endl;
	cout<<"the product of these two numbers="<<product(x,y)<<endl;
	cout<<"the product of these two numbers="<<product(x,y)<<endl;
	cout<<"the product of these two numbers="<<product(x,y)<<endl;
	cout<<"the product of these two numbers="<<product(x,y)<<endl;
	cout<<"the product of these two numbers="<<product(x,y)<<endl;
	
}
inline int product(int a,int b){
	return a*b;
}
