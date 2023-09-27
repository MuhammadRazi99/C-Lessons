#include<iostream>
using namespace std;
struct node{
int data;
node* next;
};
class Linklist{
	node *head=NULL;
	public:
		void insertAtHead(int value){
			node* temp=new node();
			temp->data=value;
			temp->next=head;
			head=temp;
		}
		void insertAtMid(int value,int location){
			node* temp=new node();
			temp->data=value;
			if(head==NULL||location==1){
				temp->next=head;
				head=temp;
				return;
			}
			node* temp1=head;
			for(int i=0;i<location-2;i++){
				temp1=temp1->next;
				if(temp1->next==NULL)
				{break;}
			}
			temp->next=temp1->next;
			temp1->next=temp;
		}
		void insertAtEnd(int value){
			node *temp=new node();
			temp->data=value;
			temp->next=NULL;
			if(head==NULL){
				head=temp;
				return;
			}
			node *temp1=head;
			while(temp1->next!=NULL){
				temp1=temp1->next;
			}
			temp1->next=temp;
		}
	void deleteAtHead(){
		if(head==NULL){
			cout<<"No list is present"<<endl;
		}
		else{
			node *temp=head;
			head=temp->next;
			delete temp;
		}
	}
	void deleteAtEnd(){
		if(head==NULL){
			cout<<"no list is present"<<endl;
		}
		else{
			node *temp1=head;
			while(temp1->next->next!=NULL){
				temp1=temp1->next;
			}
			node* temp=temp1->next;
			temp1->next=NULL;
			delete temp;
		}
	}
	void deleteAtIndex(int location){
			node *temp=head;
		if(head==NULL){
			cout<<"no list is present"<<endl;
		}
		else if(location==1){
			head=temp->next;
			delete head;
		}
		else{
			for(int i=0;i<location-2;i++){
				if(temp->next==NULL){
					cout<<"the list does not contain that index"<<endl;
					return;
				}
				temp=temp->next;
			}
			node *temp1=temp->next;
			temp->next=temp1->next;
			delete temp1;
		}
		
	}
	void print(node *temp){
		if(temp->next==NULL){
			cout<<temp->data<<" ";
		}
		else{
			cout<<temp->data<<" ";
			print(temp->next);
		}
	}
	void ReversePrint(node *temp){
		if(temp->next==NULL){
			cout<<"Values="<<temp->data<<" ";
		}
		else{
			ReversePrint(temp->next);
			cout<<temp->data<<" ";
		}
	}
	void FindValue(node *temp,int value){
		if(temp==NULL){
			cout<<"value not found"<<endl;
		}
		else if(temp->data==value)
		{
			cout<<"value found"<<endl;
		}
		else{
			FindValue(temp->next,value);
		}
	}
	node * reverseLinkList(node *temp){
		if(temp->next==NULL){
			head=temp;
			return temp;
		}
		else{
			node* temp1=reverseLinkList(temp->next);
			temp1->next=temp;
			temp->next=NULL;
			return temp;
		}
	}
	node *getHead(){
		return head;
	}
	
};
int main(){
Linklist l1;
l1.insertAtEnd(4);
l1.insertAtEnd(3);
l1.insertAtEnd(2);
l1.insertAtEnd(1);
l1.print(l1.getHead());
l1.reverseLinkList(l1.getHead());
l1.print(l1.getHead());
return 0;
}

