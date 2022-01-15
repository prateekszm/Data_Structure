#include <bits/stdc++.h>
using namespace std;
#define size 10

void insertInHeap(int arr[],int loc,int data){
	arr[loc+1]=data;
	int index=loc+1;
	int parent=index/2;
	while(index>1 and data>arr[parent]){
		swap(arr[index],arr[parent]);
		index=parent;
		parent=index/2;
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
	for(auto k:arr){
		cout<<k<<" ";
	}
	cout<<endl;
	insertInHeap(arr,heapSize,k);
	for(auto k:arr){
		cout<<k<<" ";
	}	

	

}
