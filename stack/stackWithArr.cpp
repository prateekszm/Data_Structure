#include <bits/stdc++.h>
using namespace std;
class stackWithArr
{
public:
	int *arr=new int[10];
	int capacity=10;
	int top=-1;
	void push(int data){
		if(top==capacity-1){
			cout<<"Stack is full"<<endl;
			return;
		}
		top++;
		arr[top]=data;
		

	}
	int pop(){
		if(top==-1){
			return INT_MIN;
		}
		int x=arr[top];
		top--;
		return x;
	}
	int peek(){
		return arr[top];
	}
	bool isEmpty(){
		return top==-1;
	}
	int size(){
		return top+1;
	}

	int Capacity(){
		return capacity;
	}

	void display(){
		for(int i=0;i<size();i++){
			cout<<arr[i]<<" ";
		}
	}
	
};


int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	stackWithArr s;
	s.push(3);
	s.push(3);
	s.push(3);
	s.display();
	s.pop();
	cout<<endl;
	s.display();
	cout<<s.capacity<<endl;
	cout<<s.size();
	cout<<s.peek();
}