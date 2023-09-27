#include<iostream>
using namespace std;
void print(int x,int y,int z,int *p,int *q,int *r){
	cout<<"x="<<x<<endl;
	cout<<"y="<<y<<endl;
	cout<<"z="<<z<<endl;
	cout<<"p="<<p<<endl;
	cout<<"q="<<q<<endl;
	cout<<"r="<<r<<endl;
	cout<<"*p="<<*p<<endl;
	cout<<"*q="<<*q<<endl;
	cout<<"*r="<<*r<<endl;
}
void swap(int x,int y,int z){
	int temp=z;
	z=x;
	x=y;
	y=temp;
}
void swapUsingPointer(int *p,int *q,int *r){
	int temp=*r;
	*r=*p;
	*p=*q;
	*q=temp;
}
int main(){
int x=10,y=20,z=30;
int *p=&x,*q=&y,*r=&z;
print(x,y,z,p,q,r);
swap(x,y,z);
print(x,y,z,p,q,r);
swapUsingPointer(p,q,r);
print(x,y,z,p,q,r);
return 0;
}

