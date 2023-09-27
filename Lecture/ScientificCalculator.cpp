#include<iostream>
#include<cmath>
using namespace std;
int main(){
	// this sections shows the input
	char ask;
	int value;
	float a,b,result;
	cout<<"ENTER FIRST VALUE:";
	cin>>a;
	cout<<"ENTER SECOND VALUE:";
	cin>>b;
	start: 
	//here the user have to choose the function he want to perform
	cout<<"ENTER THE FUNCTION NUMBER YOU WANT TO PERFORM:";
	cout<<"\n1.Sin\n2.Cos\n3.Tan\n4.Natural logrithm\n5.Common Logrithm";
	cout<<"\n6.Exponential\n7.Raised to power\n8.Square root\n";
	cout<<"9.Ceiling\n10.Floor\n";
	cin>>value;
	//this is core of the program.It calculates all the function as in requirment. 
	switch(value){
	case 1:  //to evalute sin function
	cout<<"Sin "<<a<<"="<<sin(a)<<endl;
	cout<<"Sin "<<b<<"="<<sin(b)<<endl;
	break;
	case 2: //to evalute cos function
	cout<<"Cos "<<a<<"="<<cos(a)<<endl;
	cout<<"Cos "<<b<<"="<<cos(b)<<endl;
	break;
	case 3: //to evalute tan function
	cout<<"Tan "<<a<<"="<<tan(a)<<endl;
	cout<<"Tan "<<b<<"="<<tan(b)<<endl;
	break;
	case 4: //to calculate logarithm having base 10
	cout<<"log "<<a<<"="<<log10(a)<<endl;
	cout<<"log "<<b<<"="<<log10(b)<<endl;
	break;
	case 5: //to calculate common logarithm or logarithm having base e
	cout<<"ln "<<a<<"="<<log(a)<<endl;
	cout<<"ln "<<b<<"="<<log(b)<<endl;
	break;	
	case 6: //to calculute Exponential 
	cout<<"Exponential of "<<a<<"="<<exp(a)<<endl;
	cout<<"Exponential of "<<b<<"="<<exp(b)<<endl;
	break;
	case 7: //to determine power of the given value 
	cout<<"Power of "<<a<<" to "<<b<<"="<<pow(a,b)<<endl;
	cout<<"Power of "<<b<<" to "<<a<<"="<<pow(b,a)<<endl;
	break;
	case 8: // to calculate squareroot of the given numbers
	cout<<"squareroot "<<a<<"="<<sqrt(a)<<endl;
	cout<<"squareroot "<<b<<"="<<sqrt(b)<<endl;
	break;
	case 9: //to find ceiling value of thhe given numbers
	cout<<"ceiling of "<<a<<"="<<ceil(a)<<endl;	
	cout<<"ceiling of "<<b<<"="<<ceil(b)<<endl;
	break;
	case 10: //to find floor value of the given numbers
	cout<<"floor of "<<a<<"="<<floor(a)<<endl;
	cout<<"floor of "<<b<<"="<<floor(b)<<endl;
	break;
	default: //in case of syntax error or someone write the letters 
	cout<<"Syntax Error"<<endl;goto start;}
	cout<<"do you want to try again (y/n)=";
	cin>>ask;
	if (ask=='y') goto start;
	return 0; }
