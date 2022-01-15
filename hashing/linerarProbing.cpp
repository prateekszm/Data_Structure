#include <bits/stdc++.h>
using namespace std;
#define size 10

int hashVal(int key){
	return key%10;
}

int probe(int hash[],int key){
	int i=0;
	int index=hashVal(key);
	while(hash[(index+i)%size]!=0){
		i++;
	}
	return (index+i)%size;
}




void insert(int arr[],int key){
	int index=hashVal(key);
	if(arr[index]!=0){
		index=probe(arr,key);
	}
	arr[index]=key;

}

int search(int hash[],int key){
	int index=hashVal(key);
		int i=0;
		while(hash[(index+i)%size]==key){
			i++;
		}

	return (index+i)%size;
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	int arr[]={14,23,53,12,4,5};
	// int size=sizeof(arr)/sizeof(arr[0]);
	int hash[10]={0};  //this will initilize all element with zero;
	
	insert(hash,14);
	insert(hash,23);
	insert(hash,53);
	insert(hash,4);
	insert(hash,5);
	

	int i=0;
	for(auto n:hash){
		cout<<i++ <<" "<<n<<endl;
	}
	cout<<search(hash,4);

}
