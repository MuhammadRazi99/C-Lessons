#include<iostream>
using namespace std;
int main(){
	cout<<" THE PRIME NUMBER FROM 1 TO 100 ARE THE FOLLOWING:"<<endl;
	for(int i=2;i<=100;i++){
		//this loop checks no from 1 to 100
		//a number can have only that factor which is half less than the number
		int n=i/2;
		for( int j=2;j<=n;j++){
			//checking half number if it is it's factor
			if(i%j==0){
			// it will be true only for a factor
				goto NotPrimeNo;
			}
		}
	cout<<i<<" ";
	NotPrimeNo:;
	}
	return 0;	
}
