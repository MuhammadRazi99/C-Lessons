#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main(){
	int sum=0;
	int RandomNumber[500];
	int ascendingOrder[500];
	int descendingOrder[500];
	srand(time(0));
	for(int i=0;i<500;i++){
		RandomNumber[i]=(rand()%91)+10;
		sum += RandomNumber[i];
		ascendingOrder[i]=RandomNumber[i];
		descendingOrder[i]=RandomNumber[i];
	}
	cout<<"Sum of 500 Random Numbers="<<sum<<endl;
	cout<<"Average of 500 Random Numbers="<<sum/500<<endl;
	for(int i=0;i<500;i++){
	for(int j=0;j<500;j++){
	if(ascendingOrder[j]>ascendingOrder[j+1]){
		int a=ascendingOrder[j];
		ascendingOrder[j]=ascendingOrder[j+1];
		ascendingOrder[j+1]=a;
	}
	
	if(descendingOrder[j]<descendingOrder[j+1]){
		int b=descendingOrder[j];
		descendingOrder[j]=descendingOrder[j+1];
		descendingOrder[j+1]=b;
	}	
	}
}
	for(int i=0;i<500;i++){
		cout<<ascendingOrder[i]<<"\t\t"<<descendingOrder[i]<<endl;}
}
