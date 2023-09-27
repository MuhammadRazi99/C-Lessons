/*Name:Muhammad Razi-ur-Rehman
Class:BESE-26C
CMS NO:337974
Assignment 2*/
#include<iostream>
using namespace std;
//structure
struct node{
	int data;
	struct node* next;
};
struct node* head=NULL;
//inserting at head
void insertAtHead(int x){
	node *temp=new node;
	temp->data=x;
	temp->next=head;
	head=temp;
}
//printing in reverse order function
void printInReverseOrder(int no){
	struct node *temp;
	for(int i=no;i>=1;i--)
	{	temp=head;
		for(int j=1;j<i;j++)
		{temp=temp->next;}
		cout<<"Value="<<temp->data<<"\tLocation="<<temp<<endl;
	}	
}//Main function
int main(){
//creating a node and inserting element
int no,x;
cout<<"How many nodes in a single linklist you want to create:"<<endl;
cin>>no;
cout<<"INSERTING AT HEAD"<<endl;
for(int i=1;i<=no;i++){
	cout<<"Enter the data for node "<<i<<"=";
	cin>>x;
	insertAtHead(x);
}
//printing in reverse order
cout<<"\nNODES OF LINK LIST IN REVERSE ORDER"<<endl;
printInReverseOrder(no);
return 0;
}
