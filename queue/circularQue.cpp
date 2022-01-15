#include <bits/stdc++.h>
using namespace std;
class queArr
{
private:
	int front;
	int rear;
	int *arr;
	int size;
	int currSize=0;
public:
	queArr(){
		front=0;
		size=5;
		rear=size-1;
		arr=new int[size];

	};
	queArr(int n);
	void enque(int data);
	int deque();
	void display();
	bool isEmpty();
	int Front();
	int Size();

	// ~queArr();
	
};
queArr::queArr(int size){
	front=rear=-1;
	this->size=size;
	arr=new int[this->size];

}
void queArr::enque(int data){
	if (currSize==size)
	{
		cout<<"Its full bruhh"<<endl;
		return;		/* code */
	}else{
		rear=(rear+1)%size;
		arr[rear]=data;
		currSize++;
	}
}
int queArr::Front(){
	return arr[front];
}
int  queArr::deque(){
	int x;
	if(currSize==0){
		cout<<"Kuch nahi hai re"<<endl;

	}else{
		front=(front+1)%size;
		x=arr[front];
		currSize--;
	}
	return x;
}
int queArr::Size(){
	return size;
}
bool queArr::isEmpty(){
	if (currSize==0)
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
	q.enque(1);
	q.enque(2);
	q.enque(3);
	q.enque(4);
	q.enque(5);

	while(!q.isEmpty()){
		cout<<q.Front()<<" ";
		q.deque();
	}

	cout<<q.isEmpty();
	
	



}
