#include<iostream>
using namespace std;
struct node{
	int data;
	node* next;
};

class queue{
	node *front=new node();
	node *rear=new node();
	public:
	queue(){
		front=NULL;
		rear=NULL;
	}
	void Enqueue(int value){
		node *temp=new node();
		temp->data=value;
		if(front==NULL&&rear==NULL){
			temp->next=NULL;
			front=temp;
			rear=temp;
		}
		else if(temp->data<front->data){
			temp->next=front;
			front=temp;
		}
		else if(temp->data>rear->data){
			rear->next=temp;
			rear=temp;
			temp->next=NULL;
		}
		else {
		node *temp1=front;
		node *temp2=front->next;
		while (temp2!=NULL){
		if(temp->data>=temp1->data&&temp->data<temp2->data){
		temp1->next=temp;
		temp->next=temp2;
		}
		temp1=temp1->next;
		temp2=temp2->next;
		}
	}
	}
	int Dequeue(){
		
		if(front==NULL&&rear==NULL){
			cout<<"Storage Error"<<endl;
		}
		else{
			node *temp=front;
			int value=temp->data;
			front=temp->next;
			delete temp;
			return value;
		}
	}
	
};
int main(){
queue q1;
q1.Enqueue(2);
q1.Enqueue(3);
q1.Enqueue(4);
q1.Enqueue(3);
q1.Enqueue(1);
cout<<q1.Dequeue()<<" ";
cout<<q1.Dequeue()<<" ";
cout<<q1.Dequeue()<<" ";
cout<<q1.Dequeue()<<" ";
cout<<q1.Dequeue()<<" ";

return 0;
}

