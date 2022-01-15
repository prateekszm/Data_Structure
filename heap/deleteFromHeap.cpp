#include <bits/stdc++.h>
using namespace std;
#define size 10

void createAHeap(int arr[],int loc,int data){

	int index=loc;
	int parent=index/2;
	while(index>1 and data>arr[parent]){
		swap(arr[index],arr[parent]);
		index=parent;
		parent=index/2;
	}
	
}
void deleteFromHeap(int arr[],int heapSize){
	int lastnode=heapSize;
	int parent=lastnode/2;
	arr[1]=arr[lastnode];
	//one element is deleted so size reduced to heapsize-1
	int i=1,j=i*2; // i = root and j = leftChild 
	while(i<heapSize-1){
		if(arr[j]<arr[j+1])
			j=j+1;
		if(arr[i]<arr[j]){
			swap(arr[i],arr[j]);
			i=j;
			j=i*2;
		}else{
			break;
		}

	}

}
int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	int arr[size]={-1,40,35,15,10,12,6,5,20,0};
	//				   1  2  3  4 5  6 7  8 9
	int heapSize=8;
	int k;
	cin>>k;
	// for(auto k:arr){
	// 	cout<<k<<" ";
	// }
	cout<<endl;
	for (int i = 1; i < heapSize+1; ++i)
	{
		createAHeap(arr,i,arr[i]);
	}
	// Heap is created 
	for(auto k:arr){
		cout<<k<<" ";
	}	
	cout<<endl;
	// Let's delete one elements from a heap and hipify that sit
	
	deleteFromHeap(arr,heapSize);
	for(auto k:arr){
		cout<<k<<" ";
	}

}
