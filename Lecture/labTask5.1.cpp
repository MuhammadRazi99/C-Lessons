#include<iostream>
#include<windows.h>
#include<iomanip>
using namespace std;
int main(){
for(int h=0;h<=10;h++){
	for(int m=0;m<60;m++){
		for(int s=0;s<60;s++){
			cout<<setw(2)<<h<<":"<<setw(2)<<m<<":"<<setw(2)<<s<<endl;
			Sleep(1000);
		}
	}
}
 return 0;	
}
