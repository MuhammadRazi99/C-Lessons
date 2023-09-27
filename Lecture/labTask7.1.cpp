#include<iostream>
using namespace std;
void square();
void square(char);
void square(char,int);
int main(){
	square();
	square('1');
	square('+',4);
	return 0;
	
	
}
void square(){
	int sideLength=5;
	char ch='*';
	for(int i=1;i<=sideLength;i++)
	{
		for(int j=1;j<=sideLength;j++){
			cout<<ch;
		}
		cout<<endl;
	} 
}
void square(char ch){
	int sideLength=5;
	for(int i=1;i<=sideLength;i++)
	{
		for(int j=1;j<=sideLength;j++){
			cout<<ch;
		}
		cout<<endl;
	} 
}
void square(char ch,int sideLength){
	for(int i=1;i<=sideLength;i++)
	{
		for(int j=1;j<=sideLength;j++){
			cout<<ch;
		}
		cout<<endl;
	} 
}
