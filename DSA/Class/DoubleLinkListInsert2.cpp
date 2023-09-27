#include<iostream>
using namespace std;
struct node{
int data;
node *pre;
node *next;
};
node *head=NULL;
void insertAtEnd(int value){
	node *temp=new node();
	temp->data=value;
	if(head==NULL){
	temp->pre=NULL;
	temp->next=head;
	head=temp;	
		return;
	}	
	node *temp1=head;
	while(temp1->next!=NULL){
		temp1=temp1->next;
	}
	temp->next=NULL;
	temp->pre=temp1;
	temp1->next=temp;
	}
void print(){
	node *temp=head;
	while(temp!=NULL){
		cout<<"Value="<<temp->data<<endl;
		temp=temp->next;
	}
}
int main(){
insertAtEnd(3);
insertAtEnd(4);
insertAtEnd(5);
insertAtEnd(6);
print();
return 0;
}

