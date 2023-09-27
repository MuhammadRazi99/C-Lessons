#include<iostream>
#include<cstring>

using namespace std;
//Binary class function

class Binary{
	private:	
		void CheckBinary();
		string s;
	public:
		string ReadBinary();
		void DisplayBinary();
		string OneComplement(string);
		string SecondComplement(string);
};

void Binary::CheckBinary()
{
	for(int i=0;i<s.length();i++)
	{
		if(s[i]!='0' && s[i]!='1')
		{
			cout<<"Invalid Binary Format"<<endl;
			exit(0);
		}
	}
}

void Binary::DisplayBinary(){
	cout<<s<<endl;
}

string Binary::OneComplement(string s){
	for(int i=0;i<s.length();i++){
		if(s[i]=='0'){
			s[i] ='1';
		}
		else{
			s[i]='0';
		}
	}
	return s;
}

string Binary::ReadBinary(){
	cout<<"Enter the Binary number"<<endl;
	cin>>s;
	CheckBinary();
	return s;
}
//Error in the second complement method
string Binary::SecondComplement(string s)
{
	int y=-1;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='1')
		{y=i;}
	}
	if(y==-1||y==0){return s;}
	else
	{
	string s1=OneComplement(s.substr(0,y-1));
	string s2=s.substr(y,s.length()+1-y);
	return s1+s2;
	}
	
}
int main(){
	Binary b;
	string bstr=b.ReadBinary();
	cout<<"One complement of the Binary\n"<<b.OneComplement(bstr)<<endl;
	cout<<"Second Complement of the Binary\n"<<b.SecondComplement(bstr)<<endl;
}
