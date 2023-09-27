#include<iostream>
//this program has a major error please check in thanks regards
using namespace std;
string getBruteforceDictionary(string inputString);

int main(){
	string s="son,cat,dog,fun,nos";
	getBruteforceDictionary(s);
	return 0;
}

string getBruteforceDictionary(string inputString){
string arr[10];
int a=0;
for(int i=0;i<inputString.length();i++){
	if (inputString[i]==',')
	{a++;}
	else
	{arr[a]+=i;}
}
for(int i=0;i<sizeof(arr)/sizeof(string);i++){
	cout<<arr[i]<<endl;
} 	
}

