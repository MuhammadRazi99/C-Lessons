#include<iostream>
using namespace std;

int large(int,int,int,int);//declaration

int main(){
int num1,num2,num3,num4;
cout<<"Enter four integers:";
cin>>num1>>num2>>num3>>num4;
//large(num1,num2,num3,num4);//call

cout<<"the largest of four number:"<<large(num1,num2,num3,num4);


return 0;	
}
int large(int a,int b,int c,int d){
if(a>=b && a>=c && a>=d)
return a;
else if(b>=a && b>=c && b>=d)
return b;
else if(c>=a && c>=b && c>=d)
return c;
else return d;	
}
