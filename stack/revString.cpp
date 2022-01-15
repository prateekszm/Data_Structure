#include <bits/stdc++.h>
using namespace std;
void insert_at_end(stack<int>&st,int data){
	if(st.empty()){
		st.push(data);
		return;
	}
	//rec call
	int temp = st.top();
	st.pop();

	insert_at_end(st,data);

	//after returning
	st.push(temp);

	
}
void reversestack(stack<int>&st){
	if(st.empty()){
		return;
	}
	int data=st.top();
	st.pop();
	reversestack(st);
	insert_at_end(st,data);
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	stack<int> stk;
	stk.push(5);
	stk.push(4);
	stk.push(3);
	stk.push(2);
	stk.push(1);
	reversestack(stk);
	while(!stk.empty()){
		cout<<stk.top()<<endl;
		stk.pop();
	}

}




