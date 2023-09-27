#include<iostream>
using namespace std;
struct node{
	int data;
	struct node* next;
};
struct node* head=NULL;
struct node* head1=NULL;
struct node* head2=NULL;
void insertAtHead(int x,node *h){
	node *temp=new node;
	temp->data=x;
	temp->next=h;
	h=temp;
}
void print(node	*h){
	node *temp=h;
	while(temp!=NULL){
		cout<<"Value="<<temp->data<<"\nLocation="<<temp<<endl;
		temp=temp->next;
	}	
}
void splitList(){
	node *temp=head;
	while(temp!=NULL){
		if(temp->data%2==0)
		{insertAtHead(temp->data,head2);}
		else
		{insertAtHead(temp->data,head1);}
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
	insertAtHead(x,head);
}
print(head);
system("CLS");
splitList();
cout<<"EVEN LINK LIST"<<endl;
print(head2);
cout<<"ODD LINK LIST"<<endl;
print(head1);
return 0;
}
