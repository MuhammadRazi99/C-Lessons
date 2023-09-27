#include<iostream>
using namespace std;
int main(){
static int j=0;	
int Int_Arr[6];
float Float_Arr[5];
char Char_Arr[4];
cout<<"Enter values into integer array:\n";
int i=0;
do{
	cout<<"location["<<i<<"]=";
	cin>>Int_Arr[i];
	i++;
}while(i<6);
i=0;
cout<<"Enter values into float array:\n";
while(i<5){
	cout<<"location["<<i<<"]=";
	cin>>Float_Arr[i];
	i++;
}
cout<<"Enter values into Character array:\n";
for(i=0;i<4;i++){
	cout<<"location["<<i<<"]=";
	cin>>Char_Arr[i];
}
cout<<"Integer values=";
i=0;
do{
	cout<<Int_Arr[i]<<" ";
	i++;
}while(i<6);
i=0;
cout<<"\nFloat Values=";
while(i<5){
	cout<<Float_Arr[i]<<" ";
	i++;
}
i=0;
cout<<"\nCharacter values=";
for(i=0;i<4;i++){
	cout<<Char_Arr[i]<<" ";
}
return 0;
}
