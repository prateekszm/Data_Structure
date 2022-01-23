#include<bits/stdc++.h>
using namespace std; 
int isOperand(char x){
	if (x=='*'||x=='^'||x==')'||x=='('||x=='+'||x=='-'||x=='/')
	{
		return 0;
	}
	return 1;
}
int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	int x1,x2,r;
	stack<int> st;
	string postfix;
	cin>>postfix;
	for(int i=0;i<postfix[i]!='\0';i++){
		if(isOperand(postfix[i])){
			st.push(postfix[i]-'0');
		}else{
			x2=st.top();
			st.pop();
			x1=st.top();
			st.pop();

		}
		switch(postfix[i]){
			case '+':
			r=x1+x2;st.push(r); break;
			case '-':
			r=x1-x2;st.push(r); break;
			case '*':
			r=x1*x2;st.push(r); break;
			case '/':
			r=x1/x2;st.push(r); break;
		}
	}
	cout<<st.top();
}

