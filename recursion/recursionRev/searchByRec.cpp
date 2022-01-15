#include <bits/stdc++.h>
using namespace std;
int search(int arr[],int size,int key){
	if(size==0){
		return -1;
	}
	if(arr[0]==key){
		return 0;
	}
	int index=search(arr+1,size-1,key);
	if (index==-1)
	{
		return-1;
	}else
		return index+1;

	//sub prob
}
int searchLast(int arr[],int size,int key){
	if (size==0)
	{
		return -1;
	}
	int index=searchLast(arr+1,size-1,key);

	if (index==-1)
	{
		if (arr[0]==key)
		{
			return 0;
		}else
			return -1;
	}
	else return index+1;
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	int arr[]{1,2,3,4,5,6,7,8,99,99,10};
	int size=11;
	// cout<<search(arr,size,99);
	cout<<searchLast(arr,size,99);

}
