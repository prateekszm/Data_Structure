#include <bits/stdc++.h>
using namespace std;
int operand(char c){
	if(c=='*'||c=='+'||c=='-'||c=='/'){
		return 0;
	}else{
		return 1;
	}


}
int pre(char c){
	if(c=='+'||c=='-'){
		return 1;
	}else if(c=='*'||c=='/'){
		return 2;
	}
	return 0;

}
void convert(){
	string str;
	cin>>str;
	stack<char> s;
	s.push('#');
	string postfix;

	int i=0;
	int j=0;
	while(str[i]!='\0'){
		if (operand(str[i]))
		{
			postfix[j++]=str[i++];
		}else{
			if(pre(str[i])>pre(s.top())){
				s.push(str[i++]);
			}else{
				postfix[j++]=s.top();
				s.pop();
			}
		}
	}
	while(!s.empty()){
		postfix[j++]=s.top();
		s.pop();
	}
	postfix[j]='\0';

	cout<<"INFIX   : "<<str<<endl;
	cout<<"POSTFIX : ";
	i=0;
	/*while(postfix[i]!=NULL){
		cout<<postfix[i];
		i++;
	}*/
	cout<<endl;
	for(i=0;i<str.length();i++){
		cout<<postfix[i];

	}
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	convert();

}