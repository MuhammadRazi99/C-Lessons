#include<iostream>
using namespace std;
struct node{
	int data;
	struct node* next;
};
struct node *head=NULL;
void insertAtHead(int value){
	node *temp=new node();
	temp->data=value;
	temp->next=head;
	head=temp;
}
void print(){
	node *temp=head;
	while(temp!=NULL){
		cout<<"value="<<temp->data<<endl;
		temp=temp->next;
	}
}
void findValue(int value){
	bool found=false;
	node *temp=head;
	while(temp!=NULL){
		if (temp->data==value){
		cout<<"Data is found at "<<temp<<endl;
		found=true;
		}
		temp=temp->next;
	}
	if(!found)
	{cout<<"Value does not exist"<<endl;}
}
int main(){
int x;
insertAtHead(2);
insertAtHead(3);
insertAtHead(4);
insertAtHead(5);
print();
cout<<"Enter value:";
cin>>x;
findValue(x);
return 0;
}

