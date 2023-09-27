#include<iostream>
using namespace std;
int main(){
	float score; 
	cout<<"Enter the student score:";
	cin>>score;
	if(score>=85 && score<=100)
	cout<<"The student passed in A Grade.";
	else if(score>=72 && score<=84)
	cout<<"The student passed in B Grade.";
	else if(score>=60 && score<=71)
	cout<<"The student passed in C Grade.";
	else if(score>=50 && score<=59) 
	cout<<"The student passed in D Grade.";
	else if(score>=0 && score<=49)
	cout<<"The student has failed";
	else cout<<"Invade score has entered.No grade can be generated.";
	return 0;
}
