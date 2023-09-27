#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
	node *pre;
};
class list{
	node* head=NULL;
	public:
		void insertAtEnd(int value){
			node* temp=new node();
			temp->data=value;
			temp->next=NULL;
			if(head==NULL){
				temp->pre=NULL;
				head=temp;
				return;
			}
			node *temp1=head;
			while(temp1->next!=NULL){
				temp1=temp1->next;
			}
			temp1->next=temp;
			temp->pre=temp1;
			temp1=NULL;
			delete temp1;
		}
		void print(){
			node* temp=head;
			while(temp->next!=NULL){
				temp=temp->next;
			}
			while(temp!=NULL){
				cout<<temp->data<<" ";
				temp=temp->pre;
			}
		}
		void reverseList(){
			node* temp=NULL,*current=head;
			while(current!=NULL){
				temp=current->pre;
				current->pre=current->next;
				current->next=temp;
				current=current->pre;
			}
			if (temp!=NULL){
			head=temp->pre;
			}
		}
};
int main(){
list l1;
l1.insertAtEnd(1);
l1.insertAtEnd(2);
l1.insertAtEnd(3);
l1.insertAtEnd(4);
l1.print();
cout<<"\n\n\n";
l1.reverseList();
l1.print();

return 0;
}

