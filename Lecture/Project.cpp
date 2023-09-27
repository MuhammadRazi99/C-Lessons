#include<iostream>
using namespace std;
float marks(int &,int &);
	
int main(){
	int choose=0,mm,mt,om=0,ot=0,fm=0,ft=0,am=0,at=0;
float mper=0,oper=0,fper=0,aper=0;
	cout<<"\t\tEDUCATION\n";
	cout<<" choose between:\n1.Matric\n2.O-level\n";
	cin>>choose;
	if(choose==1)
	{cout<<"\t\tMATRIC\n";
	mper=marks(mm,mt);}
	else 
	{cout<<"\t\tO-LEVEL\n";
	oper=marks(om,ot);}
	if (mper<=50 || oper<=50)
	{	cout<<" you are not elligible\n";
		return 0;} 
	cout<<" Choose between:\n 1.Fsc\n2.A-level=";
	cin>>choose;
	if(choose==1)
	{ cout<<"\t\tF.SC\n";
	fper=marks(fm,ft);}
	else 
	{cout<<"\t\tA-LEVEL\n";
	aper=marks(am,at);}
	if (fper<=60 || aper<=60)
	{	cout<<" you are not elligible\n";
		return 0;}
	return 0;
}
float marks(int &obtainMks=0,int &totalMks=0){
	cout<<"Enter your marks obtained="<<obtainMks;
	cin>>obtainMks;
	cout<<"Enter total marks="<<totalMks;
	cin>>totalMks;
	return obtainMks/totalMks*100;
}
