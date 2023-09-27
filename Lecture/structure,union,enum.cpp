#include<iostream>
using namespace std;
typedef struct employee
{
int eId;  //4 bytes      -
char favChar; //1 bytes  - - 9 bytes total
float salery;	//4 bytes-
}emp;
union money
{
	//only use one variable at a single time. returns garbage value if use more than one variable
	int rice; //4 bytes    -
	char car; //1 bytes    - -4 bytes total
	float pounds;//4 bytes -
};
int main(){
	//Structure 
	struct employee Razi;
	emp Safi;
	Razi.eId=10;
	Razi.favChar='M';
	Razi.salery=25000000;
	Safi.eId=3;
	Safi.favChar='S';
	Safi.salery=50000000;
	cout<<"Razi:\n";
	cout<<"The id="<<Razi.eId<<endl;
	cout<<"The favirate character="<<Razi.favChar<<endl;
	cout<<"The salery="<<Razi.salery<<endl;
	cout<<"Safi:\n";
	cout<<"The id="<<Safi.eId<<endl;
	cout<<"The favirate character="<<Safi.favChar<<endl;
	cout<<"The salery="<<Safi.salery<<endl;
	// Union
	//only one variable can be used at a time
	union money m1;
	m1.rice=25; //used before
	m1.car='C'; //now only this varible is used
	cout<<"rice="<<m1.rice<<endl; //gives garbage value
	cout<<"car="<<m1.car<<endl; //gives real value
	//emun
	enum meal{breakfast,lunch,dinner};
	//gives the value of the enum value
	cout<<"breakfast="<<breakfast<<endl; //returns 0
	cout<<"lunch="<<lunch<<endl; //return 1
	cout<<"dinner="<<dinner<<endl; //return 2
	meal m2=breakfast;
	cout<<m2<<endl;
	
}
