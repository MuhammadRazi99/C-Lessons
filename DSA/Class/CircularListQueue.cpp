#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
};
class queue{
	node *front=NULL;
	node *rear=NULL;
	public:
		void enqueue(int value){
			node *temp=new node();
			temp->data=value;
			temp->next=NULL;
			if(front==NULL)
			{front=temp;
			rear=temp;
			rear->next=front;
			}
			else
			{rear->next=temp;
			rear=temp;
			rear->next=front;}
		}
		int dequeue(){
			if(front==NULL&&rear==NULL){
				cout<<"queue is empty"<<endl;
			}
			else{
			node *temp=front;
			int value=temp->data;
			if(front==rear){
				front=NULL;
				rear=NULL;
			}
			else
			{front=front->next;}
			delete temp;	
			return value;}
		}
		void display(){
			node *temp=front;
			if(front==NULL){
				cout<<"Queue is Empty"<<endl;
				return;
			}
			while(temp!=NULL)
			{cout<<temp->data<<" ";
			temp=temp->next;}
			cout<<endl;
		}
};
int main(){
queue q1;
q1.enqueue(1);
q1.enqueue(2);
q1.enqueue(3);
q1.enqueue(4);
q1.display();
cout<<q1.dequeue()<<endl;
cout<<q1.dequeue()<<endl;
cout<<q1.dequeue()<<endl;
cout<<q1.dequeue()<<endl;
cout<<q1.dequeue()<<endl;
q1.display();
return 0;
}

