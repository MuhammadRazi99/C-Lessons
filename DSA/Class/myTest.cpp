#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
};
class Stack{
	node *top=NULL;
	public:
		void push(int value){
			node *temp=new node();
			temp->next=top;
			temp->data=value;
			top=temp;
		}
		int pop(){
			node *temp=top;
			top=temp->next;
			int value=temp->data;
			delete temp;
			return value;
		}
		int peek(){
			return top->data;
		}
		bool isEmpty(){
			if(top==NULL) {return true;}
			else {return false;}
		}
		void display(){
			node *temp=top;
			while(temp!=NULL){
				cout<<temp->data<<" ";
				temp=temp->next;
			}
			cout<<endl;
		}
};
void reverseArray(int arr[],int size){
	Stack s;
	for(int i=0;i<size;i++){
		s.push(arr[i]);
	}
	for(int j=0;j<size;j++){
		arr[j]=s.pop();
	}
	for(int k=0;k<size;k++){
		cout<<arr[k]<<" ";
	}
	cout<<endl;
}
void reverseList(){
	
}
void binaryConvertion(int num){
	Stack s;
	while(num!=0||num!=1){
		s.push(num%2);
		num/=num;
	}
	s.push(num);
	s.display();
}
int main(){
Stack s1;
//int choice,value;
//while(true){
//cout<<"Enter your choice:\n0.Exit\n1.Push\n2.Pop\n3.Peek\n4.Is Empty\n5.Display\n9.Clear the Screen"<<endl;
//cin>>choice;
//	switch(choice){
//		case 0:
//			exit(0);
//			break;
//		case 1:
//			cout<<"Enter the value=";
//			cin>>value;
//			s1.push(value);
//			break;
//		case 2:
//			cout<<"value:"<<s1.pop()<<endl;
//			break;
//		case 3:
//			cout<<"value:"<<s1.peek()<<endl;
//			break;
//		case 4:
//			cout<<"Is Empty:"<<s1.isEmpty()<<endl;
//			break;
//		case 5:
//			s1.display();
//			break;
//		case 9:
//			system("CLS");
//			break;
//		default:
//			cout<<"Could not understand. Try again"<<endl;
//			break;
//	}
//}
binaryConvertion(12);
return 0;
}

