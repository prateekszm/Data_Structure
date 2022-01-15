#include <bits/stdc++.h>
using namespace std;
bool isSorted(int *arr,int size){
	if(size==0||size==1){
	    return true;
	}
	if(arr[0]<arr[1] and isSorted(arr+1,size-1)){
		return true;
	}

	return false;

}
bool isSortedTwo(int arr[] ,int i,int size){
	if(i==size-1){
		return true;
	}

	if (arr[i]<arr[i+1] and isSortedTwo(arr,i+1,size))
	{
		return true;
	}
	return false;
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	int arr[]{1,2,3,4,5,6,7,8,99,10};
	int size=10;

	cout<<isSortedTwo(arr,0,size);

}
