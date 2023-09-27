#include<iostream>
using namespace std;
#define size 10
class stack{
	public:
//	int size=10;
	int arr[size];
	int top;
	stack(){top=-1;}
	
	void push(int n){
	if(top==size-1){
		cout<<"Stack full"<<endl;
	}
	else {
		top++;
		arr[top]=n;
	}
}
void display(){
	if(top==-1){
		cout<<"Stack is empty"<<endl;
	}
	else{
		for(int i=top;i>=0;i--){
		cout<<arr[i]<<endl;
	}
	}
	
}
void bineryConvertion(int dec){
	while(dec>1){
		push(dec%2);
		dec=dec/2;
	}
	push(dec%2);
}
void pop(){
	if(top==-1){
		cout<<"Empty stack"<<endl;
	}
	else{
		int a=arr[top];
		top--;
//		return a;
	}
}
};

int main(){
	stack s;
	s.bineryConvertion(35);
	s.pop();
	s.display();	
	return 0;
}

