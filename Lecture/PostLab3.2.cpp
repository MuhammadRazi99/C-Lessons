#include<iostream>
using namespace std;
int main(){//input section
	int vp,dp,instMonth;//vp=vehicle price,dp=down payment
	float pa;//payable Amount
	cout<<"Enter Vehical price in rupees:";
	cin>>vp;
	cout<<"Enter the Down Payment in rupees:";
	cin>>dp;
	cout<<"For how many months,do you want to lease the car:";
	cin>>instMonth;
	pa=vp-dp;
	if (instMonth<=12) pa=pa+pa*0.10;//0.10=interest rate
	else if(instMonth>12 && instMonth<=24) pa=pa+pa*0.15;//0.15=interest rate
	else if(instMonth>24 && instMonth<=36) pa=pa+pa*0.20;//0.20=interest rate
	else if(instMonth>36 && instMonth<=48) pa=pa+pa*0.25;//0.25=interest rate
	else if(instMonth>48 && instMonth<=60) pa=pa+pa*0.30;//0.30=interest rate
	else cout<<"You should enter months from 12 to 60 only\n";
	cout<<"Your monthly installment= Rs"<<pa/instMonth<<endl;//this is monthly installment
	return 0;
}
