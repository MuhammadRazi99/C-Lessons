#include<iostream>
using namespace std;
struct node{
	int data;
	struct node* next;
};
class list{
	node *head;
	public:
		list(){
			head=NULL;
		}
void insertAtHead(int x){
	node *temp=new node();
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
void splitList(list l1,list l2){
	node *temp=head;
	while(temp!=NULL){
		if(temp->data%2==0)
		{l2.insertAtHead(temp->data);}
		else
		{l1.insertAtHead(temp->data);}
		temp=temp->next;
	}
	cout<<"ODD NUMBERS"<<endl;
	l1.print();
	cout<<"EVEN NUMBERS"<<endl;
	l2.print();
}
};
int main(){
list l;
l.insertAtHead(2);
l.insertAtHead(3);
l.insertAtHead(4);
l.insertAtHead(5);
l.print();
//list MainList,l1,l2;
//int no,x;
//cout<<"How many nodes in a single linklist you want to create:"<<endl;
//cin>>no;
//for(int i=1;i<=no;i++){
//	cout<<"Enter the data for node "<<i<<"=";
//	cin>>x;
//	MainList.insertAtHead(x);
//}
//system("CLS");
//MainList.splitList(l1,l2);
//return 0;
}
