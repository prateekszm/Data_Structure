#include <bits/stdc++.h>
using namespace std;
class queArr
{
private:
	int front;
	int rear;
	int *arr;
	int size;
public:
	queArr(){
		front=rear=-1;
		size=10;
		arr=new int[size];

	};
	queArr(int n);
	void enque(int data);
	int deque();
	void display();
	bool isEmpty();
	int Size();

	// ~queArr();
	
};
queArr::queArr(int size){
	front=rear=-1;
	this->size=size;
	arr=new int[this->size];

}
void queArr::enque(int data){
	if (rear==size-1)
	{
		cout<<"Its full bruhh"<<endl;
		return;		/* code */
	}else{
		rear++;
		arr[rear]=data;
	}
}
int  queArr::deque(){
	int x;
	if(front==rear){
		cout<<"Kuch nahi hai re"<<endl;

	}else{
		x=arr[front+1];
		front++;
	}
	return x;
}
int queArr::Size(){
	return size;
}
void  queArr::display(){
	// cout<<"Hello";
	if (front==rear)
	{
		cout<<"empty"<<endl;
		return;
	}
	for (int i=front+1 ; i<=rear; ++i)
	{
		cout<<arr[i]<<" ";
	}
}
bool queArr::isEmpty(){
	if (front==rear)
	{
		return 1;
	}
	return 0;
}

int main(){
	 #ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	 #endif
	queArr q;
	// cout<<"hello";
	q.enque(8);
	q.enque(8);
	q.enque(8);
	q.enque(8);
	q.enque(8);
	q.enque(8);
	q.deque();
	q.deque();
	q.deque();
	q.display();



}
