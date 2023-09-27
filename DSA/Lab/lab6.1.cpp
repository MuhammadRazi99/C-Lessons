#include<iostream>
using namespace std;
#define size 10
class queue{
	int front;
	int rear;
	int arr[size];
	public:
	queue(){
		front=-1;
		rear=-1;
	}
	void Enqueue(int value){
		if(rear==size-1){
			cout<<"Storage Error"<<endl;
		}
		else{
			rear++;
			arr[rear]=value;
			if (front==-1){
				front++;
			}
		}
	}
	int Dequeue(){
		if((front==-1&&rear==-1)||front>rear){
			cout<<"Storage Error"<<endl;
			front=-1;
			rear=-1;
		}
		else{
			int x=arr[front];
			front++;
			return x;
		}
	}
	void Display(){
		int f=front,r=rear;
		while(f<=r){
			cout<<arr[f]<<" ";
			f++;
		}
	}
	
};
int main(){
queue q1;
int choice,value;
while(true){
cout<<"1.Enqueue\n2.Dequeue()\n3.Display\n4.Exit()\n";
cout<<"Enter your choice:";
cin>>choice;
switch(choice){
	case 1:
		cout<<"Enter an integer value=";
		cin>>value;
		q1.Enqueue(value);
		break;
	case 2:
		value=q1.Dequeue();
		break;
	case 3:
		q1.Display();
		cout<<endl;
		break;
	case 4:
		exit(0);
		break;
}
}
return 0;
}

