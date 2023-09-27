/*Name:Muhammad Razi-ur-Rehman
Class:BESE-26C
CMS NO:337974
Assignment 1*/
#include<iostream>
using namespace std;  
struct node{
	int data;
	struct node* next;
};
struct node* head=NULL;
//inserting data inside the node function
void insertAtHead(int x){
	node *temp=new node;
	temp->data=x;
	temp->next=head;
	head=temp;
}
//deleting node using value function
void deleteNode(int value){
	node *temp1=head;
	while(temp1!=NULL){
		if(temp1->data==value){
			if(temp1==head){
			head=temp1->next;
			delete temp1;
			return;
			}
			else{
			node *temp2=head;
			while(temp2->next!=temp1)
			{temp2=temp2->next;}
			temp2->next=temp1->next;
			delete temp1;
			return; 
			}
			}
	temp1=temp1->next;
	}
	cout<<"Value does not exist"<<endl;
}
//printing node function
void print(){
	cout<<"\nNODES OF LINK LIST"<<endl;
	struct node *temp=head;
	while(temp!=NULL){
		cout<<"Value="<<temp->data<<"\tLocation="<<temp<<endl;
		temp=temp->next;
	}	
}//Main Function
int main(){
//creating link list
int no,x,deleteData;
cout<<"How many nodes in a single linklist you want to create:"<<endl;
cin>>no;
cout<<"Note: Enter Unique values only"<<endl;
for(int i=1;i<=no;i++){
	cout<<"Enter the data for node "<<i<<"=";
	cin>>x;
	insertAtHead(x);
}
system("CLS");
print();
//deleting link list using value
cout<<"\nEnter the data value you want to delete:";
cin>>deleteData;
deleteNode(deleteData);
print();
return 0;
}
