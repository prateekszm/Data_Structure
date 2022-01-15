#include <bits/stdc++.h>
using namespace std;
//data 			1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
//preorder 		1 2 4 5 7 3 6 
//inorder 		4 2 7 5 1 3 6 
//postorder 	4 7 5 2 6 3 1 
//level order   1 2 3 4 5 6 7
class node{
public:
	int data;
	node *left;
	node *right;
	node(int d){
		data=d;
		left=right=NULL;
	}

};

node* buildTree(){
	int d;
	cin>>d;
	if(d==-1){
		return NULL;
	}
	node *n=new node(d);
	n->left=buildTree();
	n->right=buildTree();
	return n;
}
void printTreePreorder(node *root){
	if(root==NULL){
		return;
	}
	cout<<root->data<<" ";
	printTreePreorder(root->left);
	printTreePreorder(root->right);
}
void printTreeInorder(node *root){
	if(root==NULL){
		return;
	}
	printTreeInorder(root->left);
	cout<<root->data<<" ";
	printTreeInorder(root->right);
}
void printTreePostorder(node *root){
	if(root==NULL){
		return;
	}
	printTreePostorder(root->left);
	printTreePostorder(root->right);
	cout<<root->data<<" ";
}

void printTreeLevelOrder(node *root){
	queue<node *> q;
	q.push(root);
	while(!q.empty()){
		node *temp=q.front();
		if(temp==NULL){
			q.pop();
		}else{
			q.pop();
			cout<<temp->data<<" ";
			if(temp->left){
				q.push(temp->left);
			}
			if(temp->right){
				q.push(temp->right);
			}
		}

	}
	return;
}
void printTreeLevelOrderWithNewLine(node* root){
	queue<node*> q;
	q.push(root);
	q.push(NULL);
	while(!q.empty()){
		node *temp=q.front();
		if(temp==NULL){
			q.pop();
			cout<<endl;
			if(!q.empty()){
				q.push(NULL);
			}
		}else{
			q.pop();
			cout<<temp->data<<" ";
			if(temp->left){
				q.push(temp->left);
			}
			if(temp->right){
				q.push(temp->right);
			}
		}
	}
	return;
}
void printTreeLevelOrder2(node *root){
	queue<node *> q;
	q.push(root);
	while(!q.empty()){
		node *temp=q.front();
			q.pop();
			cout<<temp->data<<" ";
			if(temp->left){
				q.push(temp->left);
			}
			if(temp->right){
				q.push(temp->right);
			}
		

	}
	return;
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	node *root=buildTree();
	/*cout<<endl<<"Pre order root left right"<<endl;
	printTreePreorder(root);
	cout<<endl<<"In order left root  right"<<endl;
	printTreeInorder(root);
	cout<<endl<<"Post order left right root"<<endl;
	printTreePostorder(root);
	cout<<endl<<"Level order"<<endl;
	printTreeLevelOrder(root);
	cout<<endl<<"level order with gap"<<endl;
	printTreeLevelOrderWithNewLine(root);*/
	printTreeLevelOrder2(root);
}
