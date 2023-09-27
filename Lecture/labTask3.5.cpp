#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	char input;
	cout<<"Enter a value:";
	cin>>input;
	int a=int(input);
	if(a>=48 && a<=57) {
	 if(input%2==0)
	 cout<<"It is an Even digit.";
	 else cout<<"It is an odd digit.";	}
	else {
		if(a>=65 && a<=90)
		cout<<"It is an alphabet in Uppercase";
		else if(a>=97 && a<=122)
		cout<<"It is an alphabet in lowercase";
		else cout<<"It is special character";
	}
}

