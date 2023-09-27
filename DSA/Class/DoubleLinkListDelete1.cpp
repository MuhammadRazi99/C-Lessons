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
void deleteAtStart(){
	node *temp=head;
	head=temp->next;
	temp->next->pre=NULL;
	delete temp;
}
int main(){
insertAtStart(2);
insertAtStart(3);
insertAtStart(4);
insertAtStart(5);
deleteAtStart();
print();
return 0;
}

