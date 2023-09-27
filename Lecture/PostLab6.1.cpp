#include<iostream>
using namespace std;
int area(float,float); // declaration of area function
int perimeter(float,float); // declaration of perimeter function
int main(){
	// declaration of Variables
	char shape,ask;
	const float pi=3.141592653589793238; //declaration of const pi
	again: // goto statement
	cout<<"Enter the first letter of the shape:";
	cin>>shape;
	float a=0,b=0,c=0;
	switch(shape){
		// the Square case:
		case 's':
		case 'S':
			cout<<"Enter the length of the side in cms=";
			cin>>a;
			b=area(a,a); // using Area function
			cout<<"the area of sqaure="<<b<<" sq.cms"<<endl;
			b=perimeter(a,a); // using Perimeter function
			cout<<"the perimeter of square="<<b<<" cms"<<endl;
			break;
		// the Rectangle case	
			case 'r':
			case 'R':	
				cout<<"Enter the length of rectangle in cms=";
				cin>>a;
				cout<<"Enter the width of rectangle in cms=";
				cin>>b;
				c=area(a,b); // using Area function
				cout<<"the area of rectangle="<<c<<" sq.cm"<<endl;
				c=perimeter(a,b); // using Perimeter function
				cout<<"the perimeter of rectangle="<<c<<" cms"<<endl;
				break;
		// the Circle Case		
				case 'c':
				case 'C':	
					cout<<"Enter the radius of circle in cms=";
					cin>>a;
					b=area(a,a); // using Area function
					cout<<"the area of circle="<<b*pi<<" sq.cms"<<endl;
					b=perimeter(a,0); // using Perimeter function
					cout<<"the perimeter of circle="<<b*pi<<" cms"<<endl;
					break;
		//in case of an error			
					default:
						cout<<"ONLY CIRCLE, RECTANGLE, AND SQUARE CAN BE POSSIBLE:\n";
						break;
	}
	// the user can retry or check another value
	cout<<"Do you want to try again(y/n)=";
	cin>>ask;
	if (ask=='y'){ goto again;}
	return 0;
}
// the Area function
int area(float a,float b){
	float c=a*b;
	return c;
}
// the perimeter Function
int perimeter(float a,float b){
	float c=2*(a+b);
	return c;
}
