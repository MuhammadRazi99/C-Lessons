#include<iostream>
using namespace std;
class y;
class x{
	int num1;
	friend void exchange(x&,y&);
	public:
		void setData(int a)
		{num1=a;}
		void displayData(void)
		{cout<<num1<<endl;}
};
class y{
	int num2;
	friend void exchange(x&,y&);
	public:
		void setData(int a)
		{num2=a;}
		void displayData(void)
		{cout<<num2<<endl;}
};
void exchange(x &A,y &B){
	int temp=A.num1;
	A.num1=B.num2;
	B.num2=temp;
}

int main()
{
x oc1;
y oc2;
oc1.setData(25);
oc2.setData(9);
exchange(oc1,oc2);

cout<<"the value of x after exchange=";
oc1.displayData();
cout<<"the value of y after exchange=";
oc2.displayData();
return 0;
}

