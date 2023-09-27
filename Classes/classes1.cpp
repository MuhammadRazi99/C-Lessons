#include <iostream>
using namespace std;
class Employee{
	private:
		//can not be seen nor edited
		int a,b,c;
	public:
		//can be seen and give value
		int d,e;
		void setData(int a,int b,int c); //declaration
		void getData(){
			cout<<"The value of a="<<a<<endl;
			cout<<"The value of b="<<b<<endl;
			cout<<"The value of c="<<c<<endl;
			cout<<"The value of d="<<d<<endl;
			cout<<"The value of e="<<e<<endl;	
		}	
};
void Employee::setData(int a1,int b1,int c1){
a=a1;
b=b1;
c=c1;	
}
int main()
{
Employee razi;
razi.d=25;
razi.e=99;
razi.setData(1,2,3);
razi.getData();
}
