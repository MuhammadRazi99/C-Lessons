#include<iostream>
#include<cstring>
using namespace std;
int main(){
	string grade;
	int acount=0,bcount=0,ccount=0,dcount=0,fcount=0;
	cout<<"Enter the grade and we will count it.\n";
	cout<<"Enter  character to end the loop\n";
	getline(cin,grade);
	for(int i=0;grade[i]!='\0';i++){
		switch(grade[i]){
			case'A':
			case 'a':
				++acount;
			break;
			case'B':
			case'b':
				++bcount;
			break;
			case'C':
			case 'c':
				++ccount;
			break;
			case'D':
			case'd':
				++dcount;
			break;
			case'F':
			case 'f':
				++fcount;
			break;
			case'\n':
			case'\t':
			case' ':
			break;
			default:
			cout<<"you have entered wrong type of Input\n";
			break;		
		}
	}
	cout<<"\n\nTotol number of grades of same type are:";
	cout<<"\nA="<<acount;
	cout<<"\nB="<<bcount;
	cout<<"\nC="<<ccount;
	cout<<"\nD="<<dcount;
	cout<<"\nF="<<fcount;
}
