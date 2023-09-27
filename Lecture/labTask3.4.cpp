#include<iostream>
using namespace std;
int main(){
	int score; 
	cout<<"Enter the student score:";
	cin>>score;
	switch (score/10){
	case 1:
		cout<<"The student has failed";
	break;
	case 2:
		cout<<"The student has failed";
	break;
	case 3:
		cout<<"The student has failed";
	break;
	case 4:
		cout<<"The student has failed";
	break;
	case 5:
		cout<<"The student passed with D Grade";
	break;
	case 6:
		cout<<"The student passed with C Grade";
	break;
	case 7:
		cout<<"The student passed with C Grade";
	break;
	case 8:
		cout<<"The student passed with B Grade";
	break;
	case 9:
		cout<<"The student passed with A Grade";
	break;				
	default:
	 cout<<"Invalid Score was entered.No Grade can generated.";
	}
}
