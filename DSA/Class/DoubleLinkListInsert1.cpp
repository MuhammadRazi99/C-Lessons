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
	if(head!=NULL){
		head->pre=temp;
	}
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
int main(){
insertAtStart(2);
insertAtStart(3);
insertAtStart(4);
print();
return 0;
}

