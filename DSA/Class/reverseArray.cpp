#include<iostream>
using namespace std;
//reverse array
#define maxsize 10
class stack{
	int top=-1;
	int arr[maxsize];
	public:
		void push(int value){
			if(top==maxsize-1)
			{cout<<"Stack overflow"<<endl;}
			else {
				top++;
				arr[top]=value;
			}
		}
		int pop(){
			if(top==-1)
			{cout<<"Stack underflow"<<endl;}
			else {
				int value=arr[top];
				top--;
				return value;
			}
		}
		void reverseArray(int arr3[]){	
			for(int i=0;i<6;i++)
			{push(arr3[i]);}
			for(int i=0;i<6;i++)
			{arr3[i]=pop();}
		}
		void displayStack(){
			for(int i=top;i>=0;i--)
			{cout<<arr[i]<<" ";}
		}	
};
	
int main(){
	int arr3[6]={1,2,3,4,5,6};
	stack s;
	s.reverseArray(arr3);
	for(int i=0;i<6;i++)
	{cout<<arr3[i]<<" ";}
return 0;
}
