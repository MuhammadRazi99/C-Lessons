#include<iostream>
#include<Windows.h>
using namespace std;
void line();
void dp();
void dp1();
void dp2();
void dp3();
int main(){
	int dp;
	cout<<"choose between 1-3";
	cout<<"enter dp no=";
	cin>>dp;
	system("CLS");
	switch(dp){
		case 1:
			system("color 02");
			dp1();
			break;
			case 2:
				system("color 03");
				dp2();
				break;
				case 3:
					system("color 05");
					dp3();
					break;
	}
	return 0;
}
void line(){
	cout<<"\t\t";
	for(int i=1;i<=10;i++){
		cout<<"-";
	}
	cout<<endl;
}
void dp(){
	line();
	for(int i=1;i<=7;i++){
		cout<<"\t\t";
		for(int j=1;j<=10;j++){
			if (j==1 || j==10)
			{cout<<"|";}
			else cout<<" ";
		}
	cout<<endl;
	}
	line();
}
void dp1(){
	line();
	for(int i=1;i<=7;i++){
		cout<<"\t\t";
		for(int j=1;j<=10;j++){
			if (j==1 || j==10)
			{cout<<"|";}
			else if((i==2&&j==3) || i==2&&j==7)
			{cout<<"*";}
			else if ((i==6&&j==3)||(i==6&&j==4)||(i==6&&j==5)||(i==6&&j==6)||(i==6&&j==7))
			{cout<<"-";}
			else cout<<" ";
		}
	cout<<endl;
	}
	line();
}
void dp2(){
	line();
	for(int i=1;i<=7;i++){
		cout<<"\t\t";
	for(int j=1;j<=10;j++){
			if (j==1 || j==10)
			{cout<<"|";}
			else if (i==2&&j>=2&&j<=9)
			{cout<<"_";} 
			else if((i==3&&j==2)||(i==3&&j==9)) 
			{cout<<"*";}
			else if (i==4&&j>=2&&j<=9&&j!=5)
			{cout<<"_";}
			else if ((i==3&&j==5)||(i==4&&j==5))
			{cout<<"|";}
			else if (i==6&&j>=3&&j<=7)
			{cout<<"-";}
			else cout<<" ";
		}
	cout<<endl;
	}
	line();
}
void dp3(){
	line();
	for(int i=1;i<=7;i++){
		cout<<"\t\t";
		for(int j=1;j<=10;j++){
			if (j==1 || j==10)
			{cout<<"|";}
			else if((i==2&&j==3) || i==2&&j==7)
			{cout<<"*";}
			else if (i==6&&j==3){cout<<"/";}
			else if ((i==6&&j==4)||(i==6&&j==5)||(i==6&&j==6)||(i==6&&j==7))
			{cout<<"_";}
			else if(i==6&&j==8){cout<<"\\";}
			else if ((i==5&&j==4)||(i==5&&j==5)||(i==5&&j==6)||(i==5&&j==7))
			{cout<<"_";}
			else cout<<" ";
		}
	cout<<endl;
}
	line();
}
