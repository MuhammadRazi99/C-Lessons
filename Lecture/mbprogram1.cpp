#include<iostream>
using namespace std;
int main()
{
/*Write a program that inputs a decimal number and converts it to binary digits.*/
int num,rem=0, count=0, result[10];
cout<<"Enter a decimal number=";
cin>>num;
cout<<"Binary number=";
while(num!=0)
{ 
	result[count] = num%2;
	num=num/2;
	count++;
}
for(int i=count-1; i>=0; i--){
	cout << result[i];
}
return 0;
}

