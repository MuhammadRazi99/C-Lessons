#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
	};
class list{
	node *head;
public:
list()
{head=NULL;}
void InsertAtFront(int value){
	node *temp=new node;
	temp->data=value;
	temp->next=NULL;
	if(head==NULL)
	{head=temp;}
	else{
		node *p;
		p=head;
		
		while(p->next!=NULL)
		{p=p->next;}
		
		p->next=temp;
		}
	temp=NULL;
	delete temp;
	}
void InsertAtEnd(int value){
		node *temp=new node;
		temp->data=value;
		temp->next=NULL;
		if(head==NULL){
			head=temp;
		}
		else{
			temp->next=head;
			head=temp;
		}
		temp=NULL;
		delete temp;
	}	
int add(int value,int location){
	node *p=head;
	*q=head->next;
	for(int i=0;i<=2;i++){
		p=q;
		q=q->next;
	}
	p->next=temp;
	temp->next=q;
}
int search(int a){
	int c=0;
	node *p=head;
//	if()
	while(p!=NULL){
		c++;
		if(p->data==value)
		{return c;}
		p=p->next;
	}
}
void display(){
	node *p=new node;
	p=head;
		while(p!=NULL){
		cout<<p->data<<endl;
		p=p->next;
	}
	p=NULL;
	delete p;
}
};

int main(){


return 0;
}

