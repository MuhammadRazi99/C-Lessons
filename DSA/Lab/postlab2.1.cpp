#include<iostream>
#include<cstring>
using namespace std;

struct node{
	char data;
	node *next;
	};
class list{
	node *head;
public:
	list(){
		head=NULL;
	}
	void add_to_end(char value){
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
string s;
cout<<"Enter a string:";
cin>>s;
for(int i=0;s[i]!='\0';i++){
	l.add_to_end(s[i]);
}
l.display();
return 0;
}

