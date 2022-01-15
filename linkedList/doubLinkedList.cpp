#include<bits/stdc++.h>
using namespace std;
class node{
public:
	node* next,*prev;
	int data;
};
class List{
private:
	node *head;
public:
	List(){head=NULL;}
	List(int arr[],int size);
	void display();
	void insert(int index,int data);
	int deleteAtIndex(int index);
	void reverseAList();
};
List::List(int *arr,int size){
	head=new node;
	head->data=arr[0];
	head->next=NULL;
	head->prev=NULL;
	node *ptr=head;
	for (int i = 1; i < size; i++)
	{
		node *temp=new node;
		temp->data=arr[i];
		temp->next=NULL;
		ptr->next=temp;
		temp->prev=ptr;
		ptr=temp;
	}
}
void List::display(){
	node *ptr=head;
	while(ptr!=NULL){
		cout<<ptr->data<<" -> ";
		ptr=ptr->next;
	}
	cout<<"NULL"<<endl;
}
void List::insert(int index,int data){
	node *temp=new node;
	temp->data=data;
	temp->next=NULL;
	temp->prev=NULL;

	if(index==0){
		temp->next=head;
		head->prev=temp;
		head=temp;
	}else{
		node *ptr=head;
		for (int i = 1; i < index-1; ++i)
		{
			ptr=ptr->next;
		}
		temp->next=ptr->next;
		temp->prev=ptr;
		ptr->next=temp;
		temp->next->prev=temp;
	}
}
int List::deleteAtIndex(int index){
	int x;
	node *ptr=head;
	if(index==0){
		x=head->data;
		head=head->next;
		head->prev=NULL;
		delete ptr;
		return x;
	}else{
		node *temp;
		for(int i=1;i<index;i++){
			temp=ptr;
			ptr=ptr->next;
		}
		temp->next=ptr->next;
		ptr->next->prev=temp;
		x=ptr->data;
		delete ptr;
		return x;
	}

	return -1;
}
void List::reverseAList(){
	node*p=head;
	node *temp;
	while(p!=NULL){
		temp=p->next;
		p->next=p->prev;
		p->prev=temp;
		p=p->prev;
		if(p!=NULL && p->next==NULL){
			head=p;
		}
	}


}
int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int arr[]{1,2,3,4,5};
	int size=sizeof(arr)/sizeof(arr[0]);
	// cout<<size;
	List l(arr,5);
	l.display();
	l.insert(0,9);
	l.display();
	l.insert(4,65);
	l.display();
	l.deleteAtIndex(4);
	l.display();
	l.deleteAtIndex(0);
	l.display();
	l.reverseAList();
	l.display();
	return 0;
}