#include<iostream>
using namespace std;
struct node{
	int data;
	node * next;
};
class stack{
public:
	node* top=NULL;
	void push(int value){
		node *temp=new node();
		temp->data=value;
		temp->next=top;
		top=temp;
	}
	int pop(){
		node *temp=top;
		if(top==NULL)
		{cout<<"Nothing to pop";}
		else {
			int a=temp->data;
			top=temp->next;
			delete temp;
		}
	}	
};
class linkList{
void insertAtHead(int x){
	node *temp=new node;
	temp->data=x;
	temp->next=head;
	head=temp;
}
void print(){
	struct node *temp=head;
	while(temp!=NULL){
		cout<<"Value="<<temp->data<<"\tLocation="<<temp<<endl;
		temp=temp->next;
	}
}
void reverseList(){
		stack s;
		node *temp=head;
		while(temp!=NULL){
			s.push(temp);
			temp=temp->next;
		}
		temp=s.pop();
		head=temp;
		while(s.top!=NULL){
		temp->next=s.pop();
		temp=temp->next;
		}
		temp->next=NULL;
		}
};

int main(){
linkList l1;
l1.

return 0;
}

