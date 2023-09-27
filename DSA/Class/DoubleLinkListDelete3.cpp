#include<iostream>
using namespace std;
struct node{
	int data;
	node *pre;
	node *next;
};
node* head=NULL;
void insertAtStart(int value){
	node* temp=new node();
	temp->data=value;
	temp->next=head;
	temp->pre=NULL;
	head=temp;
}
void print(){
	node *temp=head;
	while(temp!=NULL){
		cout<<"Value="<<temp->data<<"\tLocation"<<temp<<endl;
		temp=temp->next;
	}
}
void deleteAtIndex(int location){
	node *temp=head;
	if(head==NULL){
		cout<<"Insert valid link list"<<endl;
		return;
	}
	if(location==1){
		head=temp->next;
		head->pre=NULL;
		delete temp;
		return;
	}
	for(int i=0;i<location-2;i++){
		temp=temp->next;
	}
	node *temp1=temp->next;
	temp->next=temp1->next;
	temp1->next->pre=temp;
	delete temp1;
}
int main(){
insertAtStart(2);
insertAtStart(3);
insertAtStart(4);
insertAtStart(5);
print();
deleteAtIndex(3);
print();
return 0;
}
