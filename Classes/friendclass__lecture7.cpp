#include <iostream>
using namespace std;

class complex;

class sum{
	public:
	int realSum(complex o1,complex o2);
	int complexSum(complex o1,complex o2);
};

class complex{
		int a,b;
		//declaring individually
//		friend int sum::complexSum(complex o1,complex o2);
//		friend int sum::realSum(complex o1,complex o2);
		//declaring as a class
		friend class sum;
	public:
		void setData(int x,int y){
			a=x;
			b=y;
		}
		void printData(){cout<<"the value is"<<a<<"+i"<<b<<endl;}
		
};

int sum::realSum(complex o1,complex o2){
		return o1.a+o2.a;
	}
int sum::complexSum(complex o1,complex o2){
		return o1.b+o2.b;
	}

int main(){


return 0;	
}

