#include<iostream>
#include<map>
#include<string>
using namespace std;
void display(map<string,int> &mark){
	map<string,int> ::iterator iter;
	for(iter=mark.begin();iter!=mark.end();iter++){
		cout<<(*iter).first<<":"<<(*iter).second<<endl;
	}
}
//map is an associative array

int main(){
	map<string,int> marksmap;
	marksmap["Razi"]=10;
	marksmap["Harry"]=7;
	marksmap["Jack"]=3;
//	marksmap.insert({"Safi",10}); //still gets a warning
 	display(marksmap);
return 0;
}

