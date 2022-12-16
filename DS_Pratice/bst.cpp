#include<bits/stdc++.h>
using namespace std;

class Node{
public:
	Node *left;
	Node *right;
	int data;

	Node(int data){
		this -> data = data;
		left=right=NULL;
	}
};

Node* insert(Node *root,int i){
	if(root == NULL){
		return new Node(i);
	}
	if(i < root->data){
		root->left = insert(root->left,i);
	}else{
		root->right = insert(root->right,i);
	}
	return root;
}


void inOrder(Node *root){
	if(root == NULL){
		return;
	}
	inOrder(root->left);
	cout<<root->data<<" ";
	inOrder(root->right);
}

Node* findSmall(Node* root){
	while(root->left!=NULL){
		root=root->left;
	}
	return root;
}
//delete a node from bst;
Node* delete(int data,Node* root){
	if(root == NULL){
		return NULL;
	}
	if(root->data < data){
		root->right = delete(data,root->right);
	}
	else if(data < root->data){
		root->left = delete(data,root->left);
	}else{
		//No child
		if(root->left &&  root->right == NULL){
			delete root;
			return NULL;
		}
		//single child
		else if (root->left){
			Node* temp = root;
			root = root->left;
			delete temp;
			return root;
		}else if(root->right){
			Node* temp = root;
			root = root->right;
			delete temp;
			return root;
		}
		//multiple child
		else{
			//find the smallest
			Node* small = findSmall(root->right);
			root -> data = small->data;
			root->right =delete(root->right,temp->data);
			return root;

		}


	}

}


int main(){
	Node *root = NULL;
	int arr[] = {8,6,3,7,12,74,15,74,25,75,33};
	for(auto i:arr){
		root = insert(root,i);
	}
	inOrder(root);
}