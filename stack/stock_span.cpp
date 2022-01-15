#include <bits/stdc++.h>
using namespace std;
void stockSpan(int *arr,int size){
	stack<int> st;
	int stock[size];
	st.push(0);
	stock[0]=1;

	for (int i = 1; i <=size-1; i++)
	{
		while(!st.empty() && arr[st.top()] < arr[i]){
			st.pop();
		}
		if(!st.empty()){
			stock[i]=i-st.top();
		}else
			stock[i]=i+1;
		st.push(i);
	}

	for (int i = 0; i < size; i++){
		cout<<stock[i]<<" ";
	}
	
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	int size;
	cin>>size;
	int arr[size];
	for (int i = 0; i < size; ++i)
	{
		cin>>arr[i];
	}
	stockSpan(arr,size);
	

}
