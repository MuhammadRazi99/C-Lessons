 #include<iostream>
using namespace std;
//friend function in c++
//forward declaration of the main class must be declarated
class complex;
class calculator{
	public:
		int add(int a,int b)
		{return (a+b);}
		int sumRealComplex(complex,complex);
		int sumComplexComplex(complex,complex);
};
//supposing main class
class complex{
	int a,b;
	//initially declaraing function as friends	
	//friend int calculator::sumRealComplex(complex , complex );
	//friend int calculator::sumComplexComplex(complex , complex );	
	//Alternating method declaring the whole class as friend
	friend class calculator;
	public:
		void setnum(int n1,int n2)
		{
		a=n1;
		b=n2;	
		}

		void printnum(void)
		{cout<<"Complex number="<<a<<"+"<<b<<"i\n";}
};
//function that are friend must be defined after the main class
int calculator::sumRealComplex(complex o1, complex o2)
		{return(o1.a+o2.a);}

int calculator::sumComplexComplex(complex o1, complex o2)
		{return(o1.b+o2.b);}
		

int main()
{complex o1,o2;
o1.setnum(1,5);
o2.setnum(2,5);
calculator calc;
int resultR=calc.sumRealComplex(o1,o2);
cout<<"The sum of real part of o1 and o2="<<resultR<<endl;
int resultC=calc.sumComplexComplex(o1,o2);
cout<<"The sum of complex part of o1 and o2="<<resultC<<endl;
	
return 0;
}

