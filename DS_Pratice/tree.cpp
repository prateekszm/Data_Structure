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

Node* builtTree(){
	int data;
	cin>>data;
	if(data == -1){
		return NULL;
	}

	Node *node = new Node(data);
	node -> left = builtTree();
	node -> right = builtTree();

	return node;
	

}
void preorder(Node *root){
	if(root == NULL){
		return;
	}
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}

void levelOrder(Node *root){
	queue<Node*> q;
	q.push(root);
	q.push(NULL);
	while(!q.empty()){
		Node* temp = q.front();
		if(temp == NULL){
			cout<<endl;
			q.pop();
			if(!q.empty())
				q.push(NULL);
		}else{
			q.pop();
			cout<<temp->data;
			if(temp->left)
				q.push(temp->left);
			if(temp->right)
				q.push(temp->right);
		}
	}
}

Node* builtTreeLevel(){
	int n;
	cin>> n;

	Node *head = new Node(n);

	queue<Node*> q;
	q.push(head);

	while( !q.empty() ){
		Node* curr = q.front();
		q.pop();

		int c1,c2;
		cin>> c1 >> c2;

		if(c1 != -1){
			curr->left = new Node(c1);
			q.push(curr -> left);
		}
		if(c2 != -1){
			curr->right =new Node(c2);
			q.push(curr->right);
		}
	}
 	return head;
}
int height(Node *root){
	if(root == NULL){
		return 0;
	}
	int h1=height(root->left);
	int h2=height(root->right);

	return 1 + max(h1,h2);
}
int diameter(Node* root){
	if(root == NULL){
		return 0;
	}
	int D1 = height(root->left)+height(root->right);
	int D2 = diameter(root->left);
	int D3 =diameter(root->right);
	return max(D1,max(D2,D3));
}
void levelOrderKth(Node *root){
	int level = 0;
	queue<Node* > q;
	q.push(root);
	q.push(NULL);
	

	while(!q.empty()){
		Node *temp = q.front();
		if(level == 0){
			if(temp !=NULL)
				cout<<temp ->data << " ";
		}
		if(temp == NULL){
			
			q.pop();level++;
			if(!q.empty()){
				q.push(NULL);
			}
		}else{
			q.pop();
			if(temp->left)
				q.push(temp->left);
			if(temp->right)
				q.push(temp->right);
		}
	}
	
}
 
int main(){
	//Node * root = builtTree();
	Node *rootLevel= builtTreeLevel();
	//preorder(root);
	levelOrder(rootLevel);
	//cout<<rootLevel->data;
	levelOrderKth(rootLevel);
	cout<<diameter(rootLevel);

	//cout<<height(rootLevel);
}