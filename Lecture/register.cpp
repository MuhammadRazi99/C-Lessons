#include<iostream>
using namespace std;
int func1(){
	static int a=5;
	a++;
	cout<<a<<endl;
}
int main(){
	for (register int i=0;i<5;i++){
		cout<<"hello"<<endl;
	}
	func1();
	func1();
	func1();
}

