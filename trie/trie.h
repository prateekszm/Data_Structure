#include <bits/stdc++.h>
using namespace std;
class Trie;

class Node{
	Node* next;
	char data;
	unordered_map<char, Node*> m;
	bool isTerminal;
public:
	Node(char data){
		this->data=data;
		isTerminal=false;
	}
	friend class Trie;
};

class Trie{
private:
	Node *root;
public:
	Trie(){
		root=new Node('\0');
	}
	//Insertion
	void insert(string word){
		Node *temp=root;
		for(char ch:word){
			if(temp->m.count(ch)==0){
				Node *n=new Node(ch);
				temp->m[ch]=n;
			}
			temp=temp->m[ch];

		}
		temp->isTerminal=true;
	}


	//searching
	bool search(string word){
		Node *temp=root;
		for(auto ch:word){
			if(temp->m.count(ch)==0){
				return 0;
			}
			temp=temp->m[ch];
		}
		return temp->isTerminal;
	}



};
