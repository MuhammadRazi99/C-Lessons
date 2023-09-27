#include<iostream>
#include<fstream>

/* the useful classes for working with files in c++ are:
1.fstreambase
2.ifstream --> derived form fstreambase
3.ofstream --> derived form fstreambase

In order to work with files in C++, you will have to open it.
Primarily, there are 2 ways to open a file:
1.Using the constructor
2.Using the member function open() of the class

*/

using namespace std;
int main(){
//	string st="My name is Muhammad Razi-ur-Rehman.";
//	ofstream out("sample1.txt"); //opening files using constructor
//	out<<st; //write operation
	
	string st2;
	ifstream in("sample1.txt");
//	in>>st2;
	getline(in,st2);
	cout<<st2<<endl;
	
}
