#include<iostream>
using namespace std;
bool alphabet(char);
int main(){
char symbol;
cout<<"Enter a character=";
cin>>symbol;
if(alphabet(symbol))
cout<<symbol<<" is an alphabet"<<endl;
else 
cout<<symbol<<" is not an alphabet"<<endl;	
}
bool alphabet(char s){
	if((s>='a' && s<='z')||(s>='A' && s<='Z'))
	{return true;}
	else 
	{return false;}
}
