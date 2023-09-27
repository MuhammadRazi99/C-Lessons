#include<iostream>
using namespace std;
int c=45;
int main(){
//build in data type
	int c=3;
	cout<<"the value of the local c:"<<c;
	cout<<"the value of the global c:"<<::c;
// float double and long double litterals
	float a=34.8f;
	long double b=34.8l;
	cout<<"the value of the  a:"<<sizeof(34.8)<<endl;
	cout<<"the value of the  aF:"<<sizeof(34.8F)<<endl;
	cout<<"the value of the af c:"<<sizeof(34.8f)<<endl;
	cout<<"the value of the bL c:"<<sizeof(34.8L)<<endl;
	cout<<"the value of the bl c:"<<sizeof(34.8l)<<endl;
//Refence variable
	float x=10;
	float  y=x;
	cout<<"the value of x:"<<x<<endl;
	cout<<"the value of y:"<<y<<endl;
//type casting(converting one type of data into another
    int s=45; 
	float t=45.67;
	cout<<"the value of int(t):"<<int(t)<<endl;
	cout<<"the value of (int)t:"<<(int)t<<endl;
	cout<<"the value of float(s):"<<float(s)<<endl;

	return 0;
}
