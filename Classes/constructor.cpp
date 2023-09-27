#include<iostream>
using namespace std;
//constructor creating 
/* construction is a special member function with the same nameas of its class.
 It is used to initiallize the objects of the class.it is automatically invoked(called)
 whenever an object is created.We do not write the return type of the constructor. */
 //characterists
 /* the constructor which do take the parameter is called default constructor.
	It should be declarated in the public section of the class.
	Automatically invoked when they are created.
	Do not have return types,they can not have return values and return types.
	It can have default arguments.
	We can not refer to their address. 
 
 */
 class complex{
 	int a,b; 
 	public:
 		complex(void);//constructor declaration
 		void printData(void)
		 {cout<<"the value ="<<a<<" + "<<b<<"i\n";}
 };
 complex::complex(void){
 	a=10;
 	b=0;
 }
int main()
{ complex c;
c.printData();

return 0;
}

