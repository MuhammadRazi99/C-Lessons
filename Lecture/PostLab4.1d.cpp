#include<iostream>
using namespace std;
int main(){//INPUT
	float num;
	cout<<"Enter any float value:";
	cin>>num;
	do{  //LOOP
		cout<<num<<endl;
		num-=0.5;
	}while(num>=0);	
return 0;
}
