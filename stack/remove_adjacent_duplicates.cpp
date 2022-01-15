#include <bits/stdc++.h>
using namespace std;


int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	string str;
	cin>>str;
	stack<char> st;
	for(int i=0;str[i]!='\0';i++){
		if(st.empty()){
			st.push(str[i]);
		}else{
			if(st.top()==str[i]){
				st.pop();
			}else{
				st.push(str[i]);
			}
			
		}
	}
	// cout<<str[0];
	string s="";
	while(!st.empty()){
		s=st.top()+s;
		st.pop();
	}
	cout<<s;
}
