#include<iostream>
using namespace std;
#define rightcircular(p,q,r,s)(s*1000+p*100+q*10+r)
#define leftcircular(p,q,r,s)(q*1000+r*100+s*10+p)
void separate(int);
int p=0,q=0,r=0,s=0; 

int main(){
	int num=0,shift1,shift2,add1,add2;
	char circular1,circular2;
	//for(int i=1;i<=2;i++){
	cout<<"Enter the character l=leftcircular,r=rightcircular =";
	cin>>circular1; //l
	cout<<"the number of shifts required=";
	cin>>shift1; //2
	cout<<"Enter the addition constant=";
	cin>>add1; //1
	//}
	cout<<"Enter the character l=leftcircular,r=rightcircular =";
	cin>>circular2; //r
	cout<<"the number of shifts required=";
	cin>>shift2; //1
	cout<<"Enter the addition constant=";
	cin>>add2;  //0
	
	cout<<"Enter a four digit number=";
	cin>>num; //1234
	//int x=0;
	for (int j=1;j<=shift1;j++){ //j=3	shift1=2
	
	separate(num); //2,3,4,1
	if (circular1=='l')
		{num=leftcircular(p,q,r,s);}// 3412
		else if (circular1=='r')
		{num=rightcircular(p,q,r,s);}
	}	
	int num1=num+add1*1000+add1*100+add1*10+add1;//num1=3412+1111=4523 
	for (int n=1;n<=shift2;n++){ //n=1	shift2=1
	separate(num1); // 4,5,2,3
	if (circular2=='l')
		{num1=leftcircular(p,q,r,s);}
		else if (circular2=='r')
		{num1=rightcircular(p,q,r,s);}// 3452
	}
	 int c=num1+add2*1000+add2*100+add2*10+add2;//c
	cout<<c<<endl;
	return 0;
}
void separate(int num){
	s=num%10;
	num=num/10;
	r=num%10;
	num=num/10;
	q=num%10;
	p=num/10;
}
