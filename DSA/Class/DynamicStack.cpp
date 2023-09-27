#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
};
class stack{
	node *top=NULL;
public:
	void push(int value){
	node *temp=new node();
	temp->data=value;
	temp->next=top;
	top=temp;
	}

	void display(){
	node *temp=top;
		while(temp!=NULL){
			cout<<temp->data<<" ";
			temp=temp->next;
		}
	}
	
	void bineryConvertion(int dec){
		while(dec>1){
			push(dec%2);
			dec=dec/2;
		}
		push(dec%2);
	}
	int pop(){
	if(top==NULL)
	{cout<<"Empty stack"<<endl;}
	else{
		node *temp=top;
		int a=temp->data;
		top=temp->next;
		delete temp;		
		return a;
	}
}
};

int main(){
	stack s;	
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.display();
	s.pop();
	s.display();
	return 0;
}

