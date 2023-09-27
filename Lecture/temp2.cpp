#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	float tc,tf,tk,t;
	tryagain:
	char initial;
	cout<<"Enter symbol of scale of temperture in which you are giving the temp="<<endl;
	cin>>initial;
	switch(initial){
		case 'c':
		cout<<"Enter the value of temperature"<<endl;
	cin>>t;	
		tc=t;	
		tk=tc+273;
		tf=(1.8*tc)+32;
		break;
		case 'f':
		cout<<"Enter the value of temperature"<<endl;
		cin>>t;	
		tf=t;
		tc=(tf-32)*5/9;
		tk=tc+273;
		break;
	case 'k':
	cout<<"Enter the value of temperature"<<endl;
	cin>>t;
		tk=t;
		tc=tk-273;
		tf=(1.8)*tc+32;
		break;
		default:
		cout<<"Syntax Error"<<endl;
		cout<<"Enter the symbol in small letters or you have entered wrong char :"<<endl;
		goto tryagain;
	}
		cout<<"temperature in fahrenheit="<<setw(6)<<tf<<endl;
		cout<<"temperature in kelvin    ="<<setw(6)<<tk<<endl;
		cout<<"temperature in celsius   ="<<setw(6)<<tc<<endl;	
		return 0;
	}
	
