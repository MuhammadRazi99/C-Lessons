#include<iostream>
#include<cmath>
using namespace std;
int main(){
	//this section the input.
	int a,b,exp[7];
	cout<<"ENTER FIRST INTEGER VALUE:";
	cin>>a;
	cout<<"ENTER SECOND INTEGER VALUE:";
	cin>>b;
	/*As given expressions are identical equations 
	so L.H.S=R.H.S .we only have to find the L.H.S*/
	exp[0]=pow(a+b,2); //(a+b)^2
	exp[1]=pow(a-b,2); //(a-b)^2
	exp[2]=pow(a+b,3); //(a+b)^3
	exp[3]=pow(a-b,3); //(a-b)^4
	exp[4]=pow(a,2)-pow(b,2); //(a^2) - (b^2)
	exp[5]=pow(a,3)-pow(b,3); //(a^3) - (b^3)
	exp[6]=pow(a,3)+pow(b,3); //(a^3) + (b^3)
	/*this is just the expression to print the given expression
	presentable on the screen*/
	cout<<"THE SOLUTION OF GIVEN EXPRESSION ARE AS FOLLOWING:"<<endl;
	cout<<"("<<a<<" + "<<b<<")^2="<<a<<"^2 + 2("<<a<<")("<<b<<") + "<<b<<"^2="<<exp[0]<<endl;
	cout<<"("<<a<<" - "<<b<<")^2="<<a<<"^2 - 2("<<a<<")("<<b<<") + "<<b<<"^2="<<exp[1]<<endl;
	cout<<"("<<a<<" + "<<b<<")^3="<<a<<"^3 + 3("<<a<<"^2)("<<b<<") + 3("<<a<<")("<<b<<"^2) + "<<b<<"^3="<<exp[2]<<endl;
	cout<<"("<<a<<" + "<<b<<")^3="<<a<<"^3 - 3("<<a<<"^2)("<<b<<") + 3("<<a<<")("<<b<<"^2) - "<<b<<"^3="<<exp[3]<<endl;
	cout<<a<<"^2 - "<<b<<"^2=("<<a<<" - "<<b<<")("<<a<<" + "<<b<<")="<<exp[4]<<endl;
	cout<<a<<"^3 - "<<b<<"^3=("<<a<<" - "<<b<<")^3 + 3("<<a<<")("<<b<<")("<<a<<" - "<<b<<")="<<exp[5]<<endl;
	cout<<a<<"^3 - "<<b<<"^3=("<<a<<" - "<<b<<")("<<a<<"^2 + ("<<a<<")("<<b<<") + "<<b<<"^2)="<<exp[5]<<endl;
	cout<<a<<"^3 + "<<b<<"^3=("<<a<<" + "<<b<<")("<<a<<"^2 - ("<<a<<")("<<b<<") + "<< b<<"^2)="<<exp[6]<<endl;
	cout<<a<<"^3 + "<<b<<"^3=("<<a<<" + "<<b<<")^3 - 3("<<a<<")("<<b<<")("<<a<<" + "<<b<<")="<<exp[6]<<endl;
	return 0;}
