//Actually this this thing works but the issue is size so in heap sort it is going to sloved;
#include <bits/stdc++.h>
using namespace std;
class Heap
{
private:
	vector<int> v;
	int size=0;
	void heapify(int i){
		int largest=i;
		int left=2*i;
		int right=2*i+1;
		if(left < v.size() and v[largest] < v[left]){
			largest=left;
		}
		if(right<v.size() and v[largest] < v[right]){
			largest = right;
		}
		if(largest != i){
			swap(v[largest],v[i]);
			heapify(largest);
		}
	};
public:
	Heap(int default_size=10){
		v.reserve(default_size+1);
		v.push_back(-1);
	};
	void push(int data){
		v.push_back(data);
		size++;
		int index=v.size()-1;
		int parent=index/2;
		while(index > 1 and v[index] > v[parent]){
			swap(v[index],v[parent]);
			index=parent;
			parent=index/2;
		}
	}

	void pop(){
		int index = v.size()-1;
		size--;
		swap(v[1],v[index]);
		heapify(1);
	}

	int top(){
		return v[1];
	}
	int size(){
		return v.size()-1;
	}
	bool isEmpty(){
		return v.size()==1;
	}

	void printHeap(){
		for(int x:v){
			cout<<x<<" ";
		}
	}

};


int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	int x;
	Heap h;
	for(int i = 0 ; i < 10 ; i++ ){
		cin>>x;
		h.push(x);
	}
	for(int i=0;i<h.size()-1;i++){
		cout<<h.top()<<" ";
		h.pop();
	}

	cout<<'\n';
	h.printHeap();
	
}



