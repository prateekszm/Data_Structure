#include <bits/stdc++.h>
using namespace std;
#include"Stack.h"
void balancing(string s){
	int i=0,count=0;
	while(i<s.length()){
		if(s[i]=='('){
			count++;
		}else if(s[i]==')'){
			count--;
		}
		if(count==-1){
			cout<<"Invalid"<<endl;
			return ;
		}
		i++;
	}
	if(count==0){
		cout<<"Valid"<<endl;
	}
	if(count>0){
		cout<<"Invalid"<<endl;
	}
}
void balancingByStack(string &str){
	stack<char> s;
	// cin>>str;
	int i=0;
	while(i<str.length()){
		if(str[i]=='['||str[i]=='{'||str[i]=='<'||str[i]=='(')
		{
			s.push(str[i]);
		}else{
			if(s.empty()){
				cout<<"Invalid seq"<<endl;
				return ;
			}else if((s.top()=='('&&str[i]==')')||
				(s.top()=='{'&&str[i]=='}')||
				(s.top()=='['&&str[i]==']')||
				(s.top()=='<'&&str[i]=='>'))
			{
				s.pop();
			}else{
				cout<<"Invalid Bro"<<endl;
				return;
			}
		}
		
		i++;
	}
	if(s.empty()){
		cout<<"Valid"<<endl;

	}else {
		cout<<"Invalid"<<endl;
	}
}
/*Main code start here*/
int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	string str;
	/*for (int i = 0; i < 5; ++i)
	{
		cin>>s;
		balancing(s);
	}*/
	stack<char> s;
	for (int i = 0; i < 5; ++i)
		{
			cin>>str;
			balancingByStack(str);
		}

	cout<<rand()%100;
	// cout<<rand()<<endl;
	// cout<<rand()<<endl;
	// cout<<rand()<<endl;
	// cout<<rand()<<endl;
	// cout<<rand();

	return 0;
}
