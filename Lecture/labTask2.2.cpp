#include<iostream>
using namespace std;
int main(){
	float c,f;
	cout<<"Enter the temperature in centigrade:";
	cin>>c;
	f=c*1.8+32; //there is no need of brackits as the formula is already in poririty type correct.
	cout<<c<<" Degrees Centigrade is equal to "<<f<<" Fahrenheit."<<endl;
	return 0;
}
