#include<iostream>
using namespace std;
// DECLARATION OF THE FUNCTIONS
#define rightCircular(p,q,r,s)(s*1000+p*100+q*10+r) //macro function used for right circulation.
#define leftCircular(p,q,r,s)(q*1000+r*100+s*10+p) //macro function used for left circulation.
inline int Add(int add){return add*1000+add*100+add*10+add;}; //inline function used to add the addition constant given by user.
void separate(int);//delaration of separate function
int func(int,int,int);// delaratioin of func function
int p=0,q=0,r=0,s=0,num; // declaration of global variables
int main(){
	int shift1,shift2,add1,add2; //declaration of local int variables
	char circular1,circular2; //declaration of local char variables
	//INPUT FROM THE USER:
	startagain:
	cout<<"Enter the character l=leftcircular,r=rightcircular =";
	cin>>circular1; 
	cout<<"the number of shifts required=";
	cin>>shift1; 
	cout<<"Enter the addition constant=";
	cin>>add1; 
	cout<<"Enter the character l=leftcircular,r=rightcircular =";
	cin>>circular2; 
	cout<<"the number of shifts required=";
	cin>>shift2; 
	cout<<"Enter the addition constant=";
	cin>>add2;  
	cout<<"Enter a four digit number=";
	cin>>num;
	//in case of error
	if(num<1000 || num>9999 || (circular1!='L'&&circular1!='l'&&circular1!='R'&&circular1!='r') || (circular2!='L'&&circular2!='l'&&circular2!='R'&&circular2!='r')) 
	{cout<<"syntax error\n Please enter input from start\n";
		goto startagain;} 
	num=func(shift1,circular1,add1); //calling func function
	num=func(shift2,circular2,add2); //calling func function
	cout<<num<<endl; //OUTPUT
	return 0;
}
void separate(int num) //it separates the number in units,tens,hundreds,and thousands.
{	s=num%10;
	num=num/10;
	r=num%10;
	num=num/10;
	q=num%10;
	p=num/10;	}
int func(int shift,int circular,int add) 
//it is used to separate, circulate left or right, add addition constant given to the user
{	for (int i=1;i<=shift;i++){ 
	separate(num); //calling separate function
	if (circular=='l'|| circular=='L')
		{num=leftCircular(p,q,r,s);} //calling macro leftcircular function
		else if(circular=='r'|| circular=='R')
		{num=rightCircular(p,q,r,s);} //calling macro rightcircular function
	}	
	return num+Add(add);	} //calling inline Add function
