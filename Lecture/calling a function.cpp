#include<iostream>
using namespace std;
void callbyReferencePointer(int* ,int*);
int callbyvalue(int ,int);
void callbyReferenceVar(int&,int&);
int& returnbyReference(int &,int&);
int main(){
	int x=4,y=5;
	cout<<"value of x= "<<x<<" and value of y= "<<y<<endl;
	//callbyReferenceVar(x,y);
	//callbyReferencePointer(&x,&y);
	//cout<<returnbyReference(x,y);
	cout<<"value of x= "<<x<<" and value of y= "<<y<<endl;
	return 0;
}
void callbyReferencePointer(int* a,int* b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
void callbyReferenceVar(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}
int callbyvalue(int a,int b){
	int temp=a;
	a=b;
	b=temp;
	return a;
}
int& returnbyReference(int &a,int&b){
	int temp=a;
	a=b;
	b=temp;
	return a;
}
