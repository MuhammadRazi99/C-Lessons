#include<iostream>
#include<cstring>
#include<list>
using namespace std;
int check_nine(int num){
    string NS=to_string(num);
    int sum=0;
    for(int i=0;i<=len(NS);i++){
    	sum+=int(NS[i]);
	}
    int remaninder=9-sum%9;
    if (remaninder==0)
        return num;
    if(int(string(remaninder)+NS)>int(NS+str(remaninder)))
        return int(NS+str(remaninder));
    else
        return int(str(remaninder)+NS);

}
    


int main(){
list<string> outputStr;
int testCase,No;
for (int i=0;i<=testCase;i++){
	cin<<No;
    outputStr.push_back(check_nine(No));
}
for(int i=0;i<=testCase;i++){
cout<<"Case #"<<i+1<<": "<<outputStr[i];
}
return 0;
}

