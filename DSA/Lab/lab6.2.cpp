#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* next;
};

class Queue{
	Node *front=new Node();
	Node *rear=new Node();
	public:
	Queue(){
		front=NULL;
		rear=NULL;
	}
	void EnQueue(int value){
		Node *temp=new Node();
		temp->data=value;
		temp->next=NULL;
		if(front==NULL){
			front=temp;
		}
		else{
			rear->next=temp;
		}
		rear=temp;
	}
	int DeQueue(){
		if(front==NULL&&rear==NULL){
			cout<<"Storage Error"<<endl;
		}
		else{
			Node *temp=front;
			int value=temp->data;
			front=temp->next;
			delete temp;
			return value;
		}
	}
	int print(){
		Node *temp=front;
		while(temp!=NULL){
			cout<<temp->data<<" ";
			temp=temp->next;
		}
	}
};
int main(){
Queue q1;
q1.EnQueue(2);
q1.EnQueue(3);
q1.EnQueue(4);
cout<<q1.DeQueue()<<" ";
cout<<q1.DeQueue()<<" ";
cout<<q1.DeQueue()<<" ";

return 0;
}

