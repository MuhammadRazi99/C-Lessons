#include<iostream>
#include<Windows.h>
using namespace std;
int main(){
	cout<<"This is a test.\n";  // \n used to end line.
	cout<<"He asked,\"How are you doing?\"\n";  // \" used to add double quotations
	cout<<"\"Education is the most powerful weapon which\n";
	cout<<"you can use to \'change\' the world\"."; // \' used to add single quotations
	for(int i=0;i<=4;i++){
		cout<<"\a";Sleep(400);
	}
	return 0;
}
