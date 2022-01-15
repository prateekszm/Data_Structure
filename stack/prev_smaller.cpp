#include <bits/stdc++.h>
using namespace std;
void previousSmaller(int *prev,int *arr,int size){
	stack<int> st;
	for (int i = 0; i < size; ++i)
	{
		while(!st.empty()&&st.top()>arr[i]){
			st.pop();
		}
		prev[i]=(st.empty() ? -1 : st.top());
		st.push(arr[i]);
	}
	//printing values
	for (int i = 0; i < size; ++i)
	{
		cout<<prev[i]<<" ";
	}
	cout<<endl;

	//putting zero in all indices of prev
	memset(prev,0,size);
	//printing index
	for (int i = 0; i < size; ++i)
	{
		while(!st.empty() && arr[st.top()] >= arr[i]){
			st.pop();
		}
		prev[i]=(st.empty() ? -1 : st.top());
		st.push(i);
	}
	for (int i = 0; i < size; ++i)
	{
		cout<<prev[i]<<" ";
	}
	cout<<endl;
}
//NEXT SMALLER SAME LOGIC REVERSE THE LOOP SIZE-1 TO <=0
void next_Smaller(int* next,int *arr,int size){
/*	stack<int> st;
	for(int i=size-1;i>=0;i--){
		while(!st.empty() && arr[st.top()]>=arr[i]){
			st.pop();
		}
		next[i]=(st.empty() ? -1 : st.top());
		st.push(i);
	}
	for (int i = 0; i < size; ++i)
	{
		cout<<next[i]<<" ";
	}
	cout<<endl;
	//printing index
	memset(next,0,sizeof(next)*size);*/
	
	stack<int> stk;

	for (int i = size-1; i >=0; i--)
	{
		while(!stk.empty() && stk.top()>=arr[i]){
			stk.pop();		
		}
		next[i]=(stk.empty() ? -1 : stk.top());
		stk.push(arr[i]);

	}	
	for (int i = 0; i < size; ++i)
	{	
		
		cout<<next[i]<<" ";
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
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	int prev[size];
	// previousSmaller(prev,arr,size);

	next_Smaller(prev,arr,size);

}