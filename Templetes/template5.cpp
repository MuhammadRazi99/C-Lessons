#include<iostream>
using namespace std;

template <class t>
class name{
	public:
		t data;
		name(t a) {data=a;}
		void display();
};

template <class t>
void name<t>::display()
{cout<<data<<endl;}

void func(int a)
{cout<<"Function 1 int value taken="<<a<<endl;}

template <class t>
void func(t a)
{cout<<"Function 2 template value taken="<<a<<endl;}

int main(){
//name <int> obj(12);
//cout<<obj.data<<endl;
//obj.display();

func(4); //exact takes the highest priority
return 0;
}

