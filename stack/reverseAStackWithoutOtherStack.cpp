#include <bits/stdc++.h>
using namespace std;
void insert_at_end(stack<int>&stk,int data){
	//base case
	if(stk.empty()){
		stk.push(data);
		return;
	}
	//work
	int temp=stk.top();
	stk.pop();
	//sub problem
	insert_at_end(stk,data);

	// Coming back from stack
	stk.push(temp);
}
void reversestack(stack<int>&stk){
	//base
	while(stk.empty()){
		return;
	}
	//work
	int data =stk.top();stk.pop();
	//small problem
	reversestack(stk);
	//returning
	insert_at_end(stk,data);
}

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	stack<int> stk;
	stk.push(1);
	stk.push(2);
	stk.push(3);
	stk.push(4);
	// int data=9;

	// cin>>data;
	reversestack(stk);
	// insert_at_end(stk,data);

	while(!stk.empty()){
		cout<<stk.top();
		cout<<endl;
		stk.pop();
	}
	cout<<"Hello world";

}
