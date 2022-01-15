#include <bits/stdc++.h>
using namespace std;
class node{
public:
	node *left;
	node *right;
	int val;
	node(int data){
		val=data;
		right=left=NULL;
	}
};

node* createBST(node *root,int data){
	if(root==NULL){
		return new node(data);
	}

	if(data < root->val){
		root->left=createBST(root->left,data);
	}else{
		root->right=createBST(root->right,data);
	}
	return root;
}

void printInorder(node *root){
	if(root==NULL){
		return;
	}

	//left root then right
	printInorder(root->left);
	cout<<root->val<<" ";
	printInorder(root->right);
}

bool search(node *root,int key){
	if(root==NULL){
		return false;
	}
	if(root->val==key){
		return true;
	}
	if(key > root->val){
		return search(root->right,key);
	}
	return search(root->left,key);
}
node* findMin(node *root){
	while(root->left!=NULL){
		root=root->left;
	}
	return root;
}
node * remove(node *root,int key){
	if(root==NULL){
		return NULL;
	}else if(key > root->val){
		root->right=remove(root->right,key);
	}else if(key<root->val){
		root->left=remove(root->left,key);
	}else{
		// no node
		if(root->left==NULL and root->right==NULL){
			delete root;
			root=NULL;
			// return root;
		}
		//single node
		//left
		else if(root->left==NULL){
			node *temp=root;
			root=root->right;
			delete temp;
			// return root;
		}
		//right
		else if(root->right==NULL){
			node *temp=root;
			root=root->left;
			delete temp;
			// return root;
		}
		//two node
		else{
			node *temp=findMin(root->right);
			root->val=temp->val;
			root->right=remove(root->right,temp->val);
		}

		
	}
	return root;
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	int arr[]={8,3,10,1,6,4,14,7,13};
	node *root=NULL;
	for(int x:arr){
		root=createBST(root,x);
	}
	printInorder(root);
	cout<<endl;
	cout<<search(root,15);
	cout<<endl;
	remove(root,8);
	cout<<endl;
	printInorder(root);
}
