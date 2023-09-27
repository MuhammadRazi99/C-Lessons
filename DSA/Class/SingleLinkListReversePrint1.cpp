#include<iostream>
using namespace std;
//structure
struct node{
	int data;
	struct node* next;
};
class list{
public:
//inserting at head
struct node* head=NULL;
void insertAtHead(int x){
	node *temp=new node;
	temp->data=x;
	temp->next=head;
	head=temp;
}	
};
void reverseRecursivePrint(node *head){
	if(head==NULL){
		return;
	}
	reverseRecursivePrint(head->next);
	cout<<head->data<<" ";
}
int main(){
//creating a node and inserting element
list l1;
l1.insertAtHead(1);
l1.insertAtHead(2);
l1.insertAtHead(3);
l1.insertAtHead(4);
//printing in reverse order
cout<<"\nNODES OF LINK LIST IN REVERSE ORDER"<<endl;
reverseRecursivePrint(l1.head);
return 0;
}
