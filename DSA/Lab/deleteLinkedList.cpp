#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
};
struct node* head=NULL;
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
void deleteAtStart(){
	if(head==NULL){
		cout<<"No link List present:"<<endl;
		return;
	}
	node *temp=head;
	head=temp->next;
	delete temp;
}
void deleteAtEnd(){
	if(head==NULL){
		cout<<"No link List present:"<<endl;
		return;
	}
	node *temp=head;
	while(temp->next->next!=NULL){
		temp=temp->next;
	}
	node *temp1=new node();
	temp1=temp->next;
	temp->next=NULL;
	delete temp1;
}
void deleteAtIndex(int location){
	if(head==NULL){
		cout<<"No link List present:"<<endl;
		return;
	}
	if(location==1)
	{deleteAtStart();}
	node *temp=head;
	for(int i=0;i<location-2;i++){
		temp=temp->next;
	}
	node *temp1=temp->next;
	temp=temp1->next;
	delete temp1;
}

int main(){
//inserting data	
insertAtHead(2);
insertAtHead(3);
insertAtHead(4);
insertAtHead(5);
//printing
print();
cout<<"Delete from start"<<endl;
//delete from start
deleteAtStart();
print();
//delete from end
cout<<"Delete from end"<<endl;
deleteAtEnd();
print();
//delete at index
//cout<<"Delete at Index"<<endl;
//deleteAtIndex(3);
return 0;
}

