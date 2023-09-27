#include<iostream>
#include<cstring>
using namespace std;
int marksInput(string);
int main()
{
float cgpa=(marksInput("CHEMISTRY")+marksInput("PHYSICS")+marksInput("MATHEMATICS"))/3;
cout<<"CGPA ="<<cgpa<<endl;
return 0;
}
int marksInput(string sub){ 
	int obt,tt;
	cout<<"\t\t"<<sub<<endl;
	cout<<"Enter your Obtained marks=";
	cin>>obt;
	cout<<"Enter your Total marks=";
	cin>>tt;
	float per=obt*100/tt;
	cout<<"Percentage of "<<sub<<"="<<per<<endl;
	cout<<"GPA of "<<sub<<"="<<per*5/100<<endl;
	return per*5/100;
}

