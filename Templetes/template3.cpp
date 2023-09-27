#include<iostream>
using namespace std;

template <class t1=int,class t2=float>
class className{
	public:
		t1 a;
		t2 b;
		className(t1 x=1,t2 y=12.2){
			a=x;
			b=y;
		}
		void display(){
			cout<<a<<" "<<b<<endl;
		}
};
int main(){
className <>obj1;
obj1.display();
className <char,float>obj2('b','a'); //not give error convert into int value
obj2.display();
return 0;
}

