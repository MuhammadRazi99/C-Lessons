#include<iostream>
using namespace std;
//write a program with constructor function and with destructor function
class program{
public:
	program();
	~program();
};

program::program(void)
{cout<<"This is construction function of program class"<<endl;}

program::~program()
{cout<<"This is destruction function of program class"<<endl;}

int main(){
cout<<"This is main function"<<endl;
program p;
cout<<"This is main function"<<endl;
return 0;
}

