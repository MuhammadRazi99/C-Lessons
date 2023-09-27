#include<iostream>
using namespace std;
struct node{
	int data;
	node* next;
};
class list{
	node* head=NULL;
public:
void insertAtHead(int x){
	node *temp=new node;
	temp->data=x;
	temp->next=head;
	head=temp;
}
void print(){
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
void reverseList(){
	node *current=head,*next=NULL,*pre=NULL;
	while(current!=NULL){
		next=current->next;
		current->next=pre;
		pre=current;
		current=next;
	}
	head=pre;
}
	
};
int main(){
list l1;
l1.insertAtHead(1);
l1.insertAtHead(2);
l1.insertAtHead(3);
l1.insertAtHead(4);
l1.print();

cout<<"\n\n";
l1.reverseList();
l1.print();
return 0;
}

