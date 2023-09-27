#include<iostream>
using namespace std;
#define square(n)(n*n)
#define cube(n)(n*n*n);
int Square(int);
int main(){
	int n;
	cout<<"Enter number:";
	cin>>n;
	cout<<"Square of number is "<<square(n)<<endl;
	cout<<"Cube of number is "<<cube(n);
}
int Square(int n){
	return n*n;
}
