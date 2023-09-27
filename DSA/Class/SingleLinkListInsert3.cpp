#include<iostream>
using namespace std;
struct node{
	int data;
	struct node* next;
};
struct node * head=NULL;
void insertAtEnd(int value){
	node *temp1=new node();
	temp1->data=value;
	temp1->next=NULL;
	if(head==NULL){
		temp1->next=head;
		head=temp1;
		return;
	}
	node *temp2=head;
	while(temp2->next==NULL){
		temp2=temp2->next;
	}
	temp2->next=temp1;
}
void print(){
	node *temp1=head;
	while(temp1!=NULL){
		cout<<"Value="<<temp1->data<<endl;
		temp1=temp1->next;
	}
}
int main(){
insertAtEnd(2);
insertAtEnd(3);
insertAtEnd(4);
insertAtEnd(5);
print();
return 0;
}

