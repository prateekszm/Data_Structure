#include <bits/stdc++.h>
using namespace std;
bool comparator(int a,int b,int flag){
	if(flag==1){
		return a>b;
	}else
		return a<b;
}
void heapify(int arr[],int size,int i , int flag){
	int largest=i;
	int left=2*i;
	int right=left+1;
	if(left<size and comparator(arr[left],arr[largest],flag)){
		largest=left;
	}
	if(right<size and comparator(arr[right],arr[largest],flag)){
		largest=right;
	}
	if(largest!=i){
		swap(arr[i],arr[largest]);
		heapify(arr,size,largest,flag);
	}
}


void heapsort(int arr[],int size,int flag){
	for(int i=size/2-1;i>=0;i--){
		//create heapify
		heapify(arr,size,i,flag);
	}

	for(int i=size-1;i>=0;i--){
		//swap first element and make heapify at first index that i zero;
		swap(arr[0],arr[i]);
		//
		heapify(arr,i,0,flag);
	}
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	int flag;
	cin>>flag;
	int arr[]={10,29,35,23,56,232,4,6,23,69,69,69,89};
	int size=sizeof(arr)/sizeof(arr[0]);
	heapsort(arr,size,flag);
	for(auto x:arr){
		cout<<x<<" ";
	}

}
