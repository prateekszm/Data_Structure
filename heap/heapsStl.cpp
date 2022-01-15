#include <bits/stdc++.h>
using namespace std;


int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	int arr[]={3,6,7,5,3,5,6,2,9,1};
	//to sort in acending order we have to provede two argument, 1 is vector and 2 is comparator
	// priority_queue<int,vector<int>,greater<int>> heap;
	priority_queue<int> heap;
	for(int x:arr){
		heap.push(x);
	}
 
	while(!heap.empty()){
		cout<<heap.top()<<" ";
		heap.pop();
	}

}
