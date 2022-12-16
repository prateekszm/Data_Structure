#include <bits/stdc++.h>
using namespace std;

#define int            long long int
class LinkedList;
class Node{
	int data;
	Node* next;
public:
	Node(int data){
		this -> data = data;
		this->next = NULL;
	}
	friend class Linkedlist;
};

class Linkedlist
{
	Node *head;
	Node *tail;
public:
	Linkedlist(){
		head = NULL;
		tail = NULL;
	}

	void push_back(int data){
		if(head == NULL){
			Node *n = new Node(data);
			head = tail = n; 
		}else{
			Node *n = new Node(data);
			tail->next = n;
			tail=n;
		}
	}
	void push_front(int data){
		if(head == NULL){
			Node *n = new Node(data);
			head = tail = n; 
		}else{
			Node *n = new Node(data);
			n->next = head;
			head=n;
		}
	}
	void print(){
		Node *temp = head;
		while(temp != NULL){
			cout<<temp->data<<" -> ";
			temp=temp->next;
		}
	}
	void insertAtPositon(int pos,int data){
		
		if(pos == 0){
			push_front(data);
			return;
		}
		pos = pos - 1;
		Node* temp = head;
		while(pos){
			temp = temp->next;
			pos--;
		}
		Node *n = new Node(data);
		n->next = temp ->next;
		temp->next = n;
	}
	int searchHelper(Node* temp,int data){
		//base case
		if(temp == NULL){
			return -1;
		}
		//value matches
		if(temp->data == data){
			return 0;
		}
		cout<<temp->data<<endl;
		int subIdx = searchHelper(temp->next,data);
		
		if(subIdx == -1){
			return -1;
		}
		return subIdx+1;

	}

	int search(int data){
		Node *temp = head;

		return searchHelper(temp , data);
	}

	void deleteAtLast(){
		Node *temp = head;
		while(temp->next->next != NULL){
			temp = temp->next;
		}
		Node* toFree = temp -> next;
		temp -> next =NULL;
		free(toFree);
	}

	void reverseALinkedList(){
		Node* current = head;
		Node* previous = NULL;
		Node* temp;
		while(temp != NULL){
			temp = current->next;
			current->next= previous;
			previous = current;
			current = temp;
			
		}
		head = previous;
	}
	
};





void solve() {
	Linkedlist l;
	l.push_front(1);
	l.push_back(2);
	l.push_back(3);
	l.push_back(4);
	l.push_back(5);
	l.push_back(6);
	//l.print();
	l.insertAtPositon(0,0);
	l.insertAtPositon(2,4);
	cout<<endl;
	l.print();
	l.deleteAtLast();
	cout<<endl;
	l.print();
	cout<<"Reverse"<<endl;
	l.reverseALinkedList();
	cout<<endl;
	l.print();
	

	cout<<l.search(4);
	
}

int32_t main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);



	clock_t z = clock();

	int t = 1;
	// cin >> t;
	while (t--) solve();

	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

	return 0;
}