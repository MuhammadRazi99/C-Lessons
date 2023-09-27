#include<iostream>
using namespace std;
struct node{
	int data;
	node *pre;
	node *next;
};
node *head=NULL;
void insertAtIndex(int value,int location){
	node *temp=new node();
	temp->data=value;
	if(location==1||head==NULL){
	temp->pre=NULL;
	temp->next=head;
	head=temp;
	return;
	}
	node *temp1=head;
	for(int i=0;i<location-2;i++){
		temp1=temp1->next;
	}
	temp->next=temp1->next;
	temp->pre=temp1;
	temp->next->pre=temp;
	temp1->next=temp;
}
void print(){
	node *temp=head;
	while(temp!=NULL){
		cout<<"Value="<<temp->data<<endl;
		temp=temp->next;
	}
}
int main(){
insertAtIndex(2,1);
insertAtIndex(3,1);
insertAtIndex(4,2);
insertAtIndex(5,2);
print();
return 0;
}

