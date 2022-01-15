#include <bits/stdc++.h>
using namespace std;
void printarr(int arr[],int size){
	for(int i=0;i<size;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}
void heapify(int arr[],int size,int i){
	int largest=i;
	int left=i*2;
	int right=left+1;
	if(left<size and arr[left]>arr[largest]){
		largest=left;
	}
	if(right<size and arr[right]>arr[largest]){
		largest=right;
	}
	if(largest!=i){
		swap(arr[i],arr[largest]);
		heapify(arr,size,largest);
	}
}

void createHeap(int arr[], int size){
	for(int i= size/2 -1;i>=0;i--){
		heapify(arr,size,i);
	}
	// above is for creating heap

	for(int i=size-1;i>=0;i--){
		swap(arr[0],arr[i]);
		//Internally swap will delete root node and we will rearrange 0'th position thats all 
		heapify(arr,i,0);
	}
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i < n ; i++ ){
		int c;
		cin>>c;
		arr[i]=c;
	}
	createHeap(arr,n);
	printarr(arr,n);



}
