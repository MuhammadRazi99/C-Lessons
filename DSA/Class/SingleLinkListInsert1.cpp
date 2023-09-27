#include<iostream>
using namespace std;
struct node{
	int data;
	struct node* next;
};
struct node* head=NULL;
void insertAtHead(int x){
	node *temp=new node;
	temp->data=x;
	temp->next=head;
	head=temp;
}
void print(){
	struct node *temp=head;
	while(temp!=NULL){
		cout<<"Value="<<temp->data<<"\tLocation="<<temp<<endl;
		temp=temp->next;
	}
}
int main(){
int no,x;
cout<<"How many nodes in a single linklist you want to create:"<<endl;
cin>>no;
for(int i=1;i<=no;i++){
	cout<<"Enter the data for node "<<i<<"=";
	cin>>x;
	insertAtHead(x);
}
system("CLS");
cout<<"NODES OF LINK LIST"<<endl;
print();
return 0;
}

