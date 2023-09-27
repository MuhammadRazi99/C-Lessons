#include<iostream>
using namespace std;
struct node{
	int data;
	node *pre;
	node *next;
};
node* head=NULL;
void insertAtStart(int value){
	node *temp=new node();
	temp->data=value;
	temp->pre=NULL;
	temp->next=head;
	head=temp;
}
void print(){
	node *temp=head;
	while(temp!=NULL){
		cout<<"Value="<<temp->data<<"\t Location="<<temp<<endl;
		temp=temp->next;
	}
}
void deleteAtEnd(){
	node* temp=head;
	if(head==NULL){
		delete temp;
		return;
	}
	while(temp->next->next!=NULL)
	{temp=temp->next;}
	delete temp->next;
	temp->next=NULL;
}
int main(){
insertAtStart(2);
insertAtStart(3);
insertAtStart(4);
insertAtStart(5);
print();
deleteAtEnd();
cout<<"\nPrinting After deleting"<<endl;
print();
return 0;
}

