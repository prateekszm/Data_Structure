#include <bits/stdc++.h>
using namespace std;
class node{
public:
	int data;
	node *next;
};
class Queue{
private:
	node *head;
	node *tail;
	int size;
public:
	Queue(){
		head=tail=NULL;
		size=0;
	}
	void push(int data);
	int pop();
	int front();
	int back();
	int Size();
	bool empty();
	void display();
};

void Queue::push(int data){
	if(size==0){
		head=new node();
		head->data=data;
		tail=head;
		head->next=NULL;
		size++;
	}else{
		node *temp=new node();
		temp->data=data;
		temp->next=NULL;
		tail->next=temp;
		tail=temp;
		size++;
	}
}
int Queue::pop(){
	node *ptr=head;
	int x=ptr->data;
	head=head->next;
	delete ptr;
	size--;
	return x;
}
int Queue::front(){
	return head->data;
}
int Queue::back(){
	return tail->data;
}
int Queue::Size(){
	return size;
}
bool Queue::empty(){
	return size==0;
}
void Queue::display(){
	if (size==0)
	{
		return;
	}else{
		node *ptr=head;
		while(ptr!=NULL){
			cout<<ptr->data<<" -> ";
			ptr=ptr->next;
		}
		cout<<"NULL";
	}
}
int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	Queue q1;
	q1.push(1);
	q1.push(2);
	q1.push(3);
	q1.push(4);
	q1.pop();
	cout<<q1.Size()<<endl;
	cout<<q1.front()<<endl;
	cout<<q1.back()<<endl;
	cout<<q1.empty()<<endl;
	q1.display();

}
