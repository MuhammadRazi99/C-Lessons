#include<iostream>
using namespace std;
struct node{
	int data;
	struct node* next;
};
struct node* head=NULL;
void insertAtLocation(int value,int location){
	node *temp1=new node();
	temp1->data=value;
	temp1->next=NULL;
	if(location==1){
		temp1->next=head;
		head=temp1;
		return;
	}
	node *temp2=head;
	for(int i=0;i<location-2;i++){
		temp2=temp2->next;
	}
	temp1->next=temp2->next;
	temp2->next=temp1;
} 
void print(){
	node *temp=head;
	while(temp!=NULL){
	cout<<"data="<<temp->data<<"\tLocation="<<temp<<endl;
	temp=temp->next;	
	}
	delete temp;
}
int main(){
insertAtLocation(1,1);
insertAtLocation(2,2);
insertAtLocation(3,2);
insertAtLocation(4,3);
print();

return 0;
}

