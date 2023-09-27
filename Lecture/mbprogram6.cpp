#include<iostream>
#include<iomanip>
using namespace std;
int main()
{float r,h;
const float pi=3.1416;
cout<<"Enter the radius and height of the cylinder=";
cin>>r>>h;
cout<<"Volume of cylinder="<<setprecision(3)<<fixed<<pi*r*r*h<<endl;
return 0;
}

