#include<iostream>
using namespace std;
struct node{
	int data;
	node *left;
	node *right;
};
class BinarySearchTree{
	node *root;
	public:
		BinarySearchTree()
		{root=NULL;}
		void insert(int value){
			node *temp=new node();
			temp->data=value;
			temp->left=NULL;
			temp->right=NULL;
			if(root==NULL){
				root=temp;
				return;
			}
			node *p=root;
			while(p!=NULL){
				if(value<p->data){
					if(p->left==NULL){
						p->left=temp;
						break;
					}
					else
					{p=p->left;}
				}
				else if(value>p->data){
					if(p->right==NULL){
						p->right=temp;
						break;
					}
					else
					{p=p->right;}
				}
				else{
				cout<<"No duplicate values can be added."<<endl;
				break;}
			}
		}
		void inorder(node *root){
			if(root!=NULL){
				inorder(root->left);
				cout<<root->data<<" ";
				inorder(root->right);
			}
		}
		void preorder(node *root){
			if(root!=NULL){
				cout<<root->data<<" ";
				inorder(root->left);
				inorder(root->right);
			}
		}
		void postorder(node *root){
			if(root!=NULL){
				inorder(root->left);
				inorder(root->right);
				cout<<root->data<<" ";
			}
		}
		void min(node* root){
			node *temp=root;
			while(temp->left!=NULL){
				temp=temp->left;
			}
			cout<<"Min:"<<temp->data<<endl;
		}
		void max(node* root){
			node *temp=root;
			while(temp->right!=NULL){
				temp=temp->right;
			}
			cout<<"Max:"<<temp->data<<endl;
		}
		
		void minRecurssion(node * root){
			if(root->left==NULL){
				cout<<"Min:"<<root->data;
				return;
			}
			minRecurssion(root->left);
		}
		void maxRecurssion(node * root){
			if(root->right==NULL){
				cout<<"Max:"<<root->data;
				return;
			}
			maxRecurssion(root->right);
			cout<<endl;
		}
		
		node* getRoot()
		{return root;}
		node * deleteNode(node* root,int value){
			if(root==NULL){
				cout<<"Tree not found"<<endl;
				return root;
			}
			else if(value<root->data){
				root->left=deleteNode(root->left,value);
			}
			else if(value>root->data){
				root->right=deleteNode(root->right,value);
			}
			else if(root->data==value){
				if(root->left==NULL&&root->right==NULL){
					delete root;
					return NULL;
				}
				else if(root->left==NULL&&root->right!=NULL){
					node* temp=root->right;
					delete root;
					return temp;
				}
				else if(root->left!=NULL&&root==NULL){
					node* temp=root->left;
					delete root;
					return temp;
				}
				else{
					int x=minRecursion();
					root->data=value;
					root->right=deletion(root->right,x);
				}
			}
			else{
				cout<<"Value not found"<<endl;
				return NULL;
			}
			return root;
		}
};
int main(){
BinarySearchTree bt;
bt.insert(5);
bt.insert(2);
bt.insert(4);
bt.insert(6);
bt.preorder(bt.getRoot());
bt.deleteNode(4);
bt.preorder(bt.getRoot());
//bt.min(bt.getRoot());
//bt.max(bt.getRoot());
//bt.maxRecurssion(bt.getRoot());
//bt.minRecurssion(bt.getRoot());
return 0;
}

