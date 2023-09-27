#include<iostream>
#define size 5
using namespace std;
//Circular array queues
class Queue{
	int front,rear;
	int arr[size];
	public:
	Queue(){
		front=-1;
		rear=-1;
	}
	void Enqueue(int x){
		if((rear+1)%size==front)
		{cout<<"Array is out of size"<<endl;}
		else{
			rear=(rear+1)%size;
			arr[rear]=x;
			if(front==-1)
			{front++;}
			}
	}
	int Dequeue(){
		int x;
		if(front==-1&&rear==-1)
		{cout<<"Array is out of size"<<endl;}
		else if(front==rear){
			x=arr[front];
			front=-1;
			rear=-1;
			return x;
		}
		else{
			x=arr[front];
			front=(front+1)%size;
			return x;
		}
	}
	void display(){
		int i=front;
		if(front==-1&&rear==-1){
			cout<<"Nothing to display"<<endl;
			return;
		}
		while(i!=(rear+1)%size){
			cout<<arr[i]<<" ";
			i=(i+1)%size;
		}
	}
	void displayByValue(int value){
		if(front==-1&&rear==-1){
			cout<<"Queue is empty"<<endl;
			return;
		}
		else if(arr[front]==value){
			cout<<"value is found at index:"<<front<<endl;
			return;
		}
		else if(front==rear){
			cout<<"could not find the value"<<endl;
			return;
		}
		else{
			front=(front+1)%size;
			displayByValue(value);
			return;
		}
	}
};
int main(){
Queue q1;
q1.Enqueue(1);
q1.Enqueue(2);
q1.Enqueue(3);
q1.Enqueue(4);
q1.Enqueue(5);
q1.displayByValue(5);
cout<<q1.Dequeue()<<endl;
cout<<q1.Dequeue()<<endl;
return 0;
}

