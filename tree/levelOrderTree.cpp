#include <bits/stdc++.h>
using namespace std;
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
	queue<node*> q;
	int d;
	cin>>d;
	node *root=new node(d);
	q.push(root);
	while(!q.empty()){
		node *temp=q.front();
		q.pop();
		int c1,c2;
		cin>>c1>>c2;
		if(c1!=-1){
			temp->left=new node(c1);
			q.push(temp->left);
		}
		if(c2!=-1){
			temp->right=new node(c2);
			q.push(temp->right);
		}
	}

	return root;
}
int height(node *root){
	if(root==NULL){
		return 0;
	}
	int h1=height(root->left);
	int h2=height(root->right);

	return max(h1,h2)+1;
}
int diameter(node* root){
	if(root==NULL){
		return 0;
	}
	int h2=diameter(root->left);
	int h3=diameter(root->right);
	int h1=height(root->left)+height(root->right);

	return max(h1,max(h2,h3));
}

void printTreeLevelOrderWithNewLine(node *root){
	queue<node*> q;
	q.push(root);
	q.push(NULL);
	while(!q.empty()){
		node *temp=q.front();
		// q.pop();
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

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	node *root=buildTree();
	printTreeLevelOrderWithNewLine(root);
	cout<<height(root)<<endl;
	cout<<diameter(root);	

}
