#include<iostream>
using namespace std;

class base1{
	protected:
		int base1int;
	public:
		void set_base1int(int a){
			base1int=a;
		}
};
class base2{
	protected:
		int base2int;
	public:
		void set_base2int(int a){
			base2int=a;
		}	
};
class derived: public base1,public base2{
	public:
		void show(){
			cout<<"Value of base 1="<<base1int<<endl;
			cout<<"Value of base 2="<<base2int<<endl;
			cout<<"Sum of base 1 and base 2="<<base1int+base2int<<endl;
		} 
};
int main(){
derived Razi;
Razi.set_base1int(5);
Razi.set_base2int(10);
Razi.show();
return 0;
}


// Syntax for inheriting in multiple inheritance
// class DerivedClassName: visibility-mode base1, visibility-mode base2
// {
//      Class body of class "DerivedClass"
// };

/*
The inherited derived class will look something like this:
Data members:
    base1int --> protected
    base2int --> protected

Member functions:
    set_base1int() --> public
    set_base2int() --> public
    set_show() --> public
*/
