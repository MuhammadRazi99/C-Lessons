#include<iostream>
#include<fstream>
using namespace std;

int main(){
ofstream out;
string name;
int age;
char classGrade;
out.open("sample3.txt");
cout<<"Enter name=";
getline(cin,name);
cout<<"Enter age=";
cin>>age;
cout<<"Enter class grade=";
cin>>classGrade;
out<<"Name:"<<name<<endl;
out<<"Age:"<<age<<endl;
out<<"Class Grade:"<<classGrade<<endl;
out.close();

system("CLS");

ifstream in;
string content;
in.open("sample3.txt");
while(in.eof()==0){
	getline(in,content);
	cout<<content<<endl;
}
in.close();
return 0;
}

