#include<iostream>
#include<cmath>
using namespace std;
int main()
{int a,b,c;
cout<<"Enter a,b and c of the given quadratic equation:";
cin>>a>>b>>c;
float f=sqrt(b*b-4*a*c);
cout<<"root="<<(-b-f)/2*a<<" "<<(-b+f)/2*a;
return 0;
}

