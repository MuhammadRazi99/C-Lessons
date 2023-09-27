#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	// to add space between the stars
	int space=6;
	// that loop represents the rows
	for (int x=1;x<=11;x=x+2){
	cout<<setw(space);
	space--;
	// that loop represents the coloumn
	for(int y=1;y<=x;y++){
		cout<<"*";
	}	
	cout<<endl;
	}
}
