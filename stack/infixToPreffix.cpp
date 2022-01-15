#include<bits/stdc++.h>
using namespace std;
int pre(char c){
	if(c=='+'||c=='-'){
		return 1;
	}else if(c=='*'||c=='/'){
		return 2;
	}
	return 0;

}
int isOperand(char c){
	if(c=='+'||c=='-'||c=='*'||c=='/'){
		return 0;
	}else{
		return 1;
	}
}
string reverse(string &s){
	int n=s.length();
	for(int i=0;i<n/2;i++){
		swap(s[i],s[n-1-i]);
	}
	return s;
}
void infixToPrefix(){
	string str;
	cin>>str;
	string infix=reverse(str);
	stack<char> s;
	s.push('#');
	string prefix;
	int i=0;int j=0;
	while(infix[i]!='\0'){
		if(isOperand(str[i])){
			prefix[j++]=infix[i++];
		}else{
			if(pre(infix[i])>pre(s.top())){
				s.push(infix[i++]);
			}else {
				prefix[j++]=s.top();
				s.pop();
			}
		}
	}
	if(!s.empty()){
		prefix[j++]=s.top();
		s.pop();
	}
	prefix[j]='\0';
	//prefix=reverse(prefix);

	cout<<"INFIX   : "<<str<<endl;
	cout<<"POSTFIX : ";
	i=0;
	// cout<<endl;
	for(i=str.length()-1;i>=0;i--){
		cout<<prefix[i];

	}
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	 // exit(-1);
	infixToPrefix();
}