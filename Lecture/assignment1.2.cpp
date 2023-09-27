#include<iostream>
using namespace std;
void series1();
void series2();
void series3();
int main(){
	tryagain:
	int series;
	char ask;
	cout<<"Enter the number of the series \nyou want to print=";
	cin>>series;
	switch(series){
		case 1: //for series 1
			cout<<"SERIES NO1\n";
			series1();
			break;
			case 2: //for series 2
			cout<<"SERIES NO2\n";
			series2();	
				break;
				case 3: //for series 3
				cout<<"SERIES NO3\n";
				series3();	
					break;
					default: // in case of invalid output
					cout<<"Invalid input\n";
					cout<<"Please enter the number between 1 and 3\n";
					goto tryagain;
					break;
	}
	//for more checking of program
	cout<<"Do you want to check other series\n";
	cout<<"Do you want to try again(y/n)=";
	cin>>ask;
	if (ask =='y'){ goto tryagain;}
	return 0;
}
//fuction for series 1
void series1(){
	int i=1;
	while(i<=4){
		int j=1;
		while(j<=i)
		{
			cout<<j;
			j++;
		}
		cout<<endl;
		i++;
	}
}
//function for series 2
void series2(){
	int i=1;
	while(i<=4){
		int j=1;
		while(j<=i)
		{
			cout<<i;
			j++;
		}
		cout<<endl;
		i++;
	}
}
//function for series 3
void series3(){
	int a=1,i=1,j=1;
	while(i<=4){
		int j=1;
		while(j<=i){
			cout<<a;
			a++;
			j++;
		}
		cout<<endl;
		i++;
	}
}
