#include<iostream>
#include<fstream>

using namespace std;

int main(){

//constructing our file with hout stream
ofstream hout("sample2.txt");

//creating a name string and filling it with the string entered by the user
string name;
cout<<"Enter your name=";
getline(cin,name);

//writing string to the file
hout<<"my name is "<<name;
hout.close();

ifstream hin("sample2.txt");
string content;
getline(hin,content);
cout<<"The content of this file:\n\n"<<content<<endl;
hin.close();

return 0;
}

