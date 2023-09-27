#include <iostream>
using namespace std;
int main(){
	float tc,tf;
	cout<<"Enter temperature in fahrenheit=";
	cin>>tf;
	tc=(tf-32)*5/9;
	cout<<"temperature in celsius="<<tc;
	return 0;
}
