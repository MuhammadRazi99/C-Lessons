#include<iostream>
using namespace std;
struct node{
	int data;
	struct node* next;
};
class list{
	node *head=NULL;
	public:
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
	while(temp2->next!=NULL)
	{temp2=temp2->next;}
	temp2->next=temp1;
	}
	void print(){
	node *temp1=head;
	while(temp1!=NULL){
		cout<<"Value="<<temp1->data<<endl;
		temp1=temp1->next;
		}
	}
	void sum(list l1,list l2){
		node* temp1=l1.head;
		node* temp2=l2.head;
		node* temp=head;
		while(temp1!=NULL||temp2!=NULL){
			if(temp1==NULL){
			while(temp2!=NULL)
			{insertAtEnd(temp2->data);
			temp2=temp2->next;}
			break;
			}
			
			else if(temp2==NULL)
			{while(temp1!=NULL)
			{insertAtEnd(temp1->data);
			temp1=temp1->next;}
			break;
			}
			
			else 
			{insertAtEnd(temp1->data+temp2->data);}
			temp1=temp1->next;
			temp2=temp2->next;
		}
	}
void inserting(){
	int value,no;
	cout<<"Enter the node no=";
	cin>>no;
	for(int i=1;i<=no;i++){
		cout<<"Enter the value=";
		cin>>value;
		insertAtEnd(value);
	}
}	
};
int main(){
list l1,l2,l3;
l1.inserting();
l2.inserting();
l3.sum(l1,l2);
l3.print();
return 0;
}

