#include <bits/stdc++.h>
using namespace std;
template<typename T>
class Node{
public:
	string key;
	T value;
	Node *next;
	Node(string key,int value){
		this->key=key;
		this->value=value;
		next=NULL;
	}
	~Node(){
		if(next!=NULL){
			delete next;
		}
	}
};
template<typename T>
class Hashtable{
	Node<T> **table;
	int cs; //total entries that have been inserted so far
	int ts; //size of table
	int hashFn(string key){
		int idx=0;
		int power=1;
		for(auto ch:key){
			idx=(idx + ch*power)%ts;
			power=(power*29)%ts;
		}
		return idx;
	}

	void rehash(){
		// save the ptr to the oldtable and we will do insertions in the new table
		Node<T>** oldTable=table;
		int oldT=ts;

		//increase the size of table
		cs=0;
		ts=2*ts + 1;
		table=new Node<T>*[ts];// make prime // double + 1

		for(int i=0;i<ts;i++){
			table[i]=NULL;
		}
		for(int i=0;i<oldT;i++){
			Node<T> *temp=oldTable[i];
			while(temp!=NULL){
				string key=temp->key;
				T value=temp->value;
				//happen in a new table
				insert(key,value);
				temp=temp->next;
			}
			//distroy the ith linked node
			if(oldTable[i]!=NULL){
				delete oldTable[i];
			}				
		}
		//delete table
		delete [] oldTable;
	}

public:
	Hashtable(int def_size=7){
		cs=0;
		ts= def_size;

		table=new Node<T>*[ts];
		for(int i=0;i<ts;i++){
			table[i]=NULL;
		}
	}

	void insert(string key,T val){
		int index=hashFn(key);
		Node<T>* n=new Node<T>(key,val);
		//Insertion at head of the linked list
		n->next=table[index];
		table[index]=n;
		cs++;
		float loding_factor=cs/float(ts);
		if(loding_factor>0.7){
			rehash();
		}
	}

	T* search(string key){
		int index=hashFn(key);
		Node<T>* temp=table[index];
		while(temp!=NULL){
			if(temp->key==key){
				return &temp->value;
			}
			temp=temp->next;
		}

		return NULL;
	}
	
	void print(){
		for(int i=0;i<ts;i++){
			cout<<"Bucket "<<i<<"-> ";
			Node<T> *temp=table[i];
			while(temp!=NULL){
				cout<< temp->key<<"-> ";
				temp=temp->next;
			}
			cout<<endl;
		}
	}

	T& operator[](string key){
		T* valueFound=search(key);
		if(valueFound==NULL){
			T object;
			insert(key,object);
			valueFound=search(key);
		}
		return *valueFound;
	}


};