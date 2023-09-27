#include<iostream>
using namespace std;
//friend function in c++
class complex{
	int a,b;
	public:
		void setnum(int n1,int n2)
		{
		a=n1;
		b=n2;	
		}
		friend complex sumComplex(complex,complex);
		void printnum(void){
			cout<<"Complex number="<<a<<"+"<<b<<"i\n";
		}
};

complex sumComplex(complex o1,complex o2){
	complex o3;
	o3.setnum((o1.a+o2.a),(o1.b+o2.b));
	return o3;
}
int main()
{
complex c1,c2,sum;
c1.setnum(2,5);
c1.printnum();

c2.setnum(3,6);
c2.printnum();

sum=sumComplex(c1,c2);
sum.printnum();
return 0;
}

