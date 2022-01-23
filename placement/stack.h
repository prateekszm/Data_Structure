// #include<bits/stdc++.h>
// #include <iostream>
#include <climits>
using namespace std;

template<typename T>
class Stack;

template<typename T>
class Node{
public:
	Node<T> *next;
	T val;
	Node(T data){
		val = data;
	}
};

template<typename T>
class Stack{
private:
	Node<T> *head;
public:
	Stack(){
		head = NULL;
	}
	void push(T data);
	void display();
	void pop();
	bool isEmpty();
	T top();
	
};
template <typename T>
void Stack<T>:: push(T data){
	Node<T> *temp = new Node<T>(data);
	temp->next = head;
	head = temp;
}
template <typename T>
bool Stack<T>:: isEmpty(){
	return head == NULL;
}
template <typename T>
T Stack<T>:: top(){
	return head->val;
}
template <typename T>
void Stack<T>:: pop(){
	if(head!=NULL){
		Node<T> *temp = head;
		head = head -> next;
		delete temp;
	}
}
template <typename T>
void Stack<T>:: display(){  // This thing is not in stack class property
	Node<T> *temp = head;
	while(temp!=NULL){
		cout<<temp -> val<<" ";
		temp=temp -> next;
	}
}

// int main(){
// 	#ifndef ONLINE_JUDGE
// 		freopen("input.txt", "r", stdin);
// 		freopen("output.txt", "w", stdout);
// 	#endif
// 	// template <typename T>
// 	Stack<int> st;
// 	st.push(1);
// 	st.push(2);
// 	st.push(3);

// 	st.display();
// }