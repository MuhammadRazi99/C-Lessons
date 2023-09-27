#include<iostream>
#include<cmath>
using namespace std;

class points{
	int a,b;
	public:
		friend points point(points o1,points o2);
		
		void getData(int x,int y)
		{
			a=x;
			b=y;
		}
		void displayData()
		{cout<<"("<<a<<","<<b<<")";}
		int distance(void)
		{return sqrt(a+b);}
};
points point(points o1,points o2){
	points o3;
	o3.getData(pow(2,(o2.a-o1.a)),pow(2,(o2.b-o1.b)));
	return o3;
}

int main(){
	points r,s;
	r.getData(0,0);
	s.getData(1,1);
	point(r,s);
	cout<<"Distance between ";
	r.displayData();
	cout<<" to ";
	s.displayData();
	cout<<" =";distance();
	return 0;
}
