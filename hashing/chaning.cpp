#include <bits/stdc++.h>
using namespace std;

class node{
public:

	node* next;
	int data;
	
};
class hashTable{
public:

	node **arr;
	//creating hash array and initilizing with NULL ptr
	hashTable(){
		arr=new node* [10];
		for(int i=0;i<10;i++){
			arr[i]=NULL;
		}
	}
	//this will return hash value
	int hash(int data){
		return data%10;
	}	

	// push into the dara
	void push(int data){
		int hashIdx=hash(data);
		node * temp=new node;
		temp->data=data;
		temp->next=NULL;
		// No node present
		if(arr[hashIdx]==NULL){
			arr[hashIdx]=temp;
		}else{
			node *p=arr[hashIdx];
			node *q=arr[hashIdx];
			while(p and p->data < data){
				q=p;
				p=p->next;
			}
			//in case position is first
			if(q==arr[hashIdx]){
				temp->next=arr[hashIdx];
				arr[hashIdx]=temp;
			}else{
				temp->next=q->next;
				q->next=temp;
			}
		}
	}

	int search(int data){
		int hashIdx=hash(data);
		node *ptr=arr[hashIdx];
		while(ptr){
			if(ptr->data == data){
				return ptr->data;
			}
			ptr=ptr->next;

		}
		return -1;
	}

};

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	int arr[]={14,23,53,12,4,5,19,35,26,23,65,78,30,67,100};
	int size=sizeof(arr)/sizeof(arr[0]);
	hashTable H;
	for(auto z:arr){
		H.push(z);
	}
	int key=53;
	int value=H.search(key);
	cout << "Key: " << key << ", Value: " << value << endl;
	cout << "Unsuccessful Search" << endl;
	key = 95;
	value = H.search(key);
	cout << "Key: " << key << ", Value: " << value << endl;

}
