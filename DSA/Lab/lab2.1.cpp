#include<iostream>
using namespace std;

struct node{
	int data;
	node *next;
	};
class list{
	node *head;
public:
	list(){
		head=NULL;
	}
	void add_to_end(int value){
		node *temp=new node;
		temp->data=value;
		temp->next=NULL;
		if(head==NULL){
			head=temp;
		}
		else{
			node *p;
			p=head;
			while(p->next!=NULL){
				p=p->next;
			}
			p->next=temp;
		}
		temp=NULL;
		delete temp;
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
list l;
l.add_to_end(1);
l.add_to_end(6);
l.add_to_end(8);
l.display();
return 0;
}

