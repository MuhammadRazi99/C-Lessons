#include<iostream>
#include<windows.h>
#include<string>
using namespace std;
inline float per(int,int);
void check(int,string,string,string);
int EducationalInformation();
int main(){
	EducationalInformation();
}
inline float per(int obt,int tt)
	{return obt*100/tt; }
void check(int a,string b,string c,string d){
	switch(a){
	case 1:
		cout<<"\t\t"<<b<<"\n";	
		break;
		case 2:
			cout<<"\t\t"<<c<<"\n";
			break;
			case 3:
				cout<<"\t\t"<<d<<"\n";
				break;	}
}	
int EducationalInformation(){
	
	int a[9];
	float b[2];
cout<<"\t\tEDUCATIONAL INFORMATION\n";
class10:
cout<<"Choose between the following:\n1.MATRIC with BIOLOGY\n2.MATRIC with COMPUTER\n3.O-LEVEL\n";
cin>>a[0];
	if(a[0]!=1&&a[0]!=2&&a[0]!=3)
	{cout<<"syntax error\nPlease try again\n Enter number as option\n";
		Sleep(3000);
		system("CLS");
		goto class10;}
check(a[0],"MATRIC with BIOLOGY","MATRIC with COMPUTER","O-LEVEL");
		cout<<"Enter your obtained marks=";
		cin>>a[1];
		cout<<"Enter total marks=";
		cin>>a[2];
		b[0]=per(a[1],a[2]);
		cout<<"Percentage="<<b[0]<<endl;
		if(b[0]<=60){
			cout<<"SORRY\nNot Elligible\n";
			Sleep(3000);
			return 0;
		}				
class12:
	cout<<"Choose between the following:\n1.F.SC\n2.ICS\n3.A-LEVEL\n";
	cin>>a[3];
	if(a[3]!=1&&a[3]!=2&&a[3]!=3)
	{cout<<"syntax error\nPlease try again\n Enter number as option\n";
		Sleep(3000);
		system("CLS");
		goto class12;}
	check(a[3],"F.SC","ICS" ,"A-LEVEL");
	cout<<"Enter your obtained marks=";
		cin>>a[4];
		cout<<"Enter total marks=";
		cin>>a[5];
		b[1]=per(a[4],a[5]);
		cout<<"Percentage="<<b[1]<<endl;
		if(b[1]<=60){
			cout<<"SORRY\nNot Elligible\n";
			Sleep(3000);
			return 0;
		}
EnteryTest:		
cout<<"Choose between the following:\n1.NET\n2.SAT\n3.NTS\n";
cin>>a[6];
	if(a[6]!=1&&a[6]!=2&&a[6]!=3)
	{cout<<"syntax error\nPlease try again\n Enter number as option\n";
		Sleep(3000);
		system("CLS");
		goto EnteryTest;}
check(a[6],"NET","SAT","NTS");				
cout<<"Enter your obtained marks=";
cin>>a[7];
cout<<"Total marks=";
cin>>a[8];
b[2]=per(a[7],a[8]);
		cout<<"Percentage="<<b[2]<<endl;
		if(b[2]<=70){
			cout<<"SORRY\nNot Elligible\n";
			Sleep(3000);
			return 0;
		}
}
