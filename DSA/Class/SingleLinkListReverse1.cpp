#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
};
class list{
	private:
		node *head=NULL;
	public:
		void insertAtStart(int value){
			node *newNode=new node();
			newNode->data=value;
			newNode->next=head;
			head=newNode;			
		}
		void insertAtEnd(int value){
			node *newNode=new node();
			newNode->data=value;
			if(head==NULL){
				newNode->next=head;
				head=newNode;
				return;
			}
			node *temp=head;
			while(temp->next!=NULL){
				temp=temp->next;
			}
			temp->next=newNode;
		}
		void print(){
			node *temp=head;
			while(temp!=NULL){
				cout<<"Value="<<temp->data<<"\tLocation="<<temp<<endl;
				temp=temp->next;
			}	
		}
		list reverseList(){
			list l1;
			node *temp=head;
			while(temp!=NULL){
				l1.insertAtStart(temp->data);
				temp=temp->next;
			}
			return l1;
}
};

int main(){
list l1,l2;
l1.insertAtEnd(2);
l1.insertAtEnd(3);
l1.insertAtEnd(4);
l1.insertAtEnd(5);
l1.print();
cout<<"\nReversing the list"<<endl;
l2=l1.reverseList();
l2.print();
return 0;
}

