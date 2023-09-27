#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int space=6;
	cout<<setw(9)<<"/\\\\"<<"\t\t\t\\/\t\\/"<<endl;
	for(int i=1; i<=5;i++){
		cout<<setw(space);
		space--;
		cout<<"/";
		for(int j=1; j<=i; j++){
			cout<<"* ";
		}
		cout<<"\\";
		for(int n=1; n<=i; n++){
			cout<<"*";
			if (n!=i) cout<<" ";
		}
		cout<<"\\"<<endl;
	}
cout<<"------------------------"<<endl<<endl;
cout<<"_______________________________________________"<<endl;
cout<<"_______________________________________________"<<endl<<endl;
	space=2;
	cout<<"------------------------"<<endl;
	for(int i=5; i>=1;i--){
		cout<<setw(space);
		space++;
		cout<<"\\";
		for(int j=1; j<=i; j++){
			cout<<"* ";
		}
		cout<<"/";
		for(int n=1; n<=i; n++){
			cout<<"*";
			if (n!=i) cout<<" ";
		}
		cout<<"/"<<endl;
} 
	cout<<setw(9)<<"\\//"<<"\t\t\t\\/\t\\/"<<endl<<endl;
cout<<"_______________________________________________"<<endl;
cout<<"_______________________________________________"<<endl;
}

