/*Name=Muhammad Razi-ur-Rehman
Class=BESE-26C
CMS NO:337974
Assignment 1*/
#include<iostream>
#include<windows.h>
using namespace std;
struct node{
	int data;
	node *next;
	node *pre;
};
class DoublyLinkList{
	private:
		node *head=NULL;
	public:
//		insert function 1
		void addToStart(int value){
			node *newNode=new node();
			newNode->data=value;
			newNode->pre=NULL;
			if(head!=NULL){head->pre=newNode;}
			newNode->next=head;
			head=newNode;	
		}
//		insert function 2
		void addToEnd(int value){
			if(head==NULL){
			addToStart(value);
			return;
			}
			node *temp=head;
			while(temp->next!=NULL)
			{temp=temp->next;}
			node *newNode=new node();
			newNode->next=NULL;
			newNode->pre=temp;
			temp->next=newNode;
			newNode->data=value;
		}
//		insert function 1
		void addAtLocation(int value,int location){
			if (head==NULL || location==1){
			addToStart(value);
			return;
			}
			node *temp=head;
			for(int i=0;i<location-2;i++)
			{temp=temp->next;}
			node *newNode=new node();
			newNode->next=temp->next;
			newNode->pre=temp;
			temp->next=newNode;
			newNode->next->pre=newNode;
			newNode->data=value;
		}
//delete function 1
		void deleteFromStart(){
			if(head==NULL)
			{cout<<"please insert valid linked list head address"<<endl;}
			else if (head->next==NULL)
			{head=NULL;
			delete head;}
			else{
			node *delNode=head;
			head=delNode->next;
			head->pre=NULL;
			delete delNode;
			}
		}
//delete function 2
		void deleteFromEnd(){
			if(head==NULL){
				cout<<"please insert a valid linked list head address"<<endl;
				return;
			}
			else if(head->next==NULL){
				head=NULL;
				delete head;
			}
			else{
				node *temp=head;
			while(temp->next->next!=NULL)
			{temp=temp->next;}
			node *delNode=temp->next;
			temp->next=NULL;
			delete delNode;
			}
		}
//delete function 3
		void deleteFromLocation(int location){
			if(head==NULL)
			{cout<<"please insert a valid linked head address"<<endl;}
			else if(location==1)
			{deleteFromStart();}
			else{
			node *temp=head;
			for(int i=0;i<location-2;i++)
			{temp=temp->next;}
			node *delNode=temp->next;
			temp->next=delNode->next;
			delNode->next->pre=temp;
			temp=NULL;
			delete delNode, temp;
			}		
			}
//forward display
		void forwardDisplay(){
			if(head==NULL)
			{cout<<"List is empty"<<endl;return;}
			node *temp=head;
			while(temp!=NULL){
				cout<<"Value="<<temp->data<<"\tLocation="<<temp<<endl;
				temp=temp->next;
			}
			temp=NULL;
			delete temp;
		}
//backward display or reverse display
		void backwardDisplay(){
			if(head==NULL)
			{cout<<"List is empty"<<endl;return;}
			node *temp=head;
			while(temp->next!=NULL)
			{temp=temp->next;}
			while(temp!=NULL){
			cout<<"Value="<<temp->data<<"\tLocation="<<temp<<endl;
			temp=temp->pre;	
			}
			temp=NULL;
			delete temp;
		}
//search function
		node* search(int value){
			node* temp=head;
			bool find=false;
			int count=1;
			while(temp!=NULL){
				if(temp->data==value)
				{find=true;break;}
				count++;
				temp=temp->next;
			}
			if(!find){cout<<"Value is absent"<<endl;}
			cout<<"Value is placed at node="<<count<<endl;
			return temp;
		}
// count function
		int count(){
			node* temp=head;
			int count=0;
			while(temp!=NULL){
				count++;
				temp=temp->next;
			}
			temp=NULL;
			delete temp;
			return count;
		}
// move to front function
		void moveToFront(int value){
			node *temp=search(value);
			if(temp==head){
				cout<<"Already at head"<<endl;
				return;
			}
			if(temp->next!=NULL)
			{temp->next->pre=temp->pre;}
			temp->pre->next=temp->next;
			temp->pre=NULL;
			temp->next=head;
			head->pre=temp;
			head=temp;
		}
//move to end function
		void moveToEnd(int value){
			node *temp=search(value);
			if(temp->next==NULL)
			{cout<<"Already at End"<<endl;return;}
			temp->next->pre=temp->pre;
			if(temp!=head)
			{temp->pre->next=temp->next;}
			else{
				head=head->next;
				head->pre=NULL;
			}
			node *tail=head;
			while(tail->next!=NULL)
			{tail=tail->next;}
			tail->next=temp;
			temp->pre=tail;
			temp->next=NULL;
		}
};
int main(){
DoublyLinkList l1;
while(true){
	int func1,func2,location;
	cout<<"1.Addition functions\n2.Deleting functions\n3.Displaying\n4.Search and Count\n5.Move to front and move to end\n6.Exit"<<endl;
	cout<<"Enter the number of the function=";
	cin>>func1;
	switch(func1){
		case 1:
			//addition functions handling
			system("CLS");
			int no,value;
			cout<<"Enter the number of nodes you want to add=";
			cin>>no;
			cout<<"1.Add To Start\n2.Add to End\n3.Add to Location"<<endl;
			cout<<"Enter the value of function=";
			cin>>func2;
			for(int i=1;i<=no;i++){
				cout<<"Enter the value of the node "<<i<<"=";
				cin>>value;
				switch(func2){
					case 1:
						l1.addToStart(value);
						break;
					case 2:
						l1.addToEnd(value);
						break;
					case 3:
						cout<<"Enter valid index location=";
						cin>>location;
						l1.addAtLocation(value,location);
						break;
				}
			}
			break;
		case 2:
			//deleting function handling
			system("CLS");
			cout<<"1.Delete from start\n2.Delete from end\n3.Delete from location"<<endl;
			cout<<"Enter the value of function=";
			cin>>func2;
			switch(func2){
				case 1:
					l1.deleteFromStart();
					break;
				case 2:
					l1.deleteFromEnd();
					break;
				case 3:
					cout<<"Enter valid index location=";
					cin>>location;
					l1.deleteFromLocation(location);
					break;
			}
			break;	
		case 3:
			//displaying function handling
			system("CLS");
			cout<<"1.Forward Display\n2.Backward Display"<<endl;
			cout<<"Enter the value of function=";
			cin>>func2;
			switch(func2){
				case 1:
					l1.forwardDisplay();
					break;
				case 2:
					l1.backwardDisplay();
					break;
			}
			break;
		case 4:
//			searching and count function handling
			system("CLS");
			cout<<"1.Search\n2.Count"<<endl;
			cout<<"Enter the value of function=";
			cin>>func2;
			switch(func2){
				case 1:
					int value;
					cout<<"Enter the value you want to search=";
					cin>>value;
					cout<<"location="<<l1.search(value)<<endl;
					break;
				case 2:
					cout<<"Length of doubly linked list="<<l1.count()<<endl;
					break;
			}
			break;
		case 5:
//			value move to front or to end handling
			system("CLS");
			cout<<"Enter the value you want to change=";
			cin>>value;
			cout<<"1.Move to Front\n2.Move to End"<<endl;
			cout<<"Enter the value of function=";
			cin>>func2;
			switch(func2){
				case 1:
					l1.moveToFront(value);
					break;
				case 2:
					l1.moveToEnd(value);
					break;
			}
			break;
		case 6:
//			exiting the loop or program
			exit(0);
			break;
	}
}
return 0;
}
