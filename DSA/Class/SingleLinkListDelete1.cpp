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
		cout<<"Value="<<temp->data;
		cout<<"\tNext Location="<<temp->next<<endl;
		temp=temp->next;
	}
	
}
void deleteNode(int location){
	node *temp1=head;
	if (location==1){
		head=temp1->next;
		delete temp1;
		return;
	}
	for(int i=0;i<location-2;i++){
		temp1=temp1->next;
	}
	node *temp2=temp1->next;
	temp1->next=temp2->next;
	delete temp2;
}

int main(){
//creating a node
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
//deleting a node
cout<<"Link List after deleting a node"<<endl;
deleteNode(3);
print();
return 0;
}


