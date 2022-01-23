#include<bits/stdc++.h>
using namespace std;
int isOperand(char x){
	if (x=='*'||x=='^'||x==')'||x=='('||x=='+'||x=='-'||x=='/')
	{
		return 0;
	}
	return 1;
}
int inPrecedence(char x){
	if(x=='+'||x=='-'){
		return 2;
	}else if(x=='*'||x=='/'){
		return 4;
	}else if(x=='^'){
		return 5;
	}else if(x=='('){
		return 0;
	}
	return -1;
}
int outPrecedence(char x){
    if (x == '+' || x == '-'){
        return 1;
    } else if (x == '*' || x == '/'){
        return 3;
    } else if (x == '^'){
        return 6;
    } else if (x == '('){
        return 7;
    } else if (x == ')'){
        return 0;
    }
    return -1;
}
char* convert(char* str){
	char *postfix=new char[strlen(str)+1];
	stack<char> s;
	int i=0,j=0;
	while(str[i]!='\0'){
		if(isOperand(str[i])){
			postfix[j++]=str[i++];
		}else{
			if(s.empty()||outPrecedence(str[i])>inPrecedence(s.top())){
				s.push(str[i++]);
			}else if(outPrecedence(str[i])==inPrecedence(s.top())){
				s.pop();
				// i++;
			}else{
				postfix[j++]=s.top();
				s.pop();
			}
		}
	}
	while(! s.empty() && s.top() != ')'){
		postfix[j++]=s.top();
		s.pop();
	}
	postfix[j]='\0';
	for(int i=0;i<strlen(str)-1;i++){
		cout<<postfix[i];
	}
	cout<<endl;
	return postfix;
}
int main(){
	// #ifndef ONLINE_JUDGE
	// 	freopen("input.txt","r",stdin);
	// 	freopen("output.txt","w",stdout);
	// #endif
	char infix[] = "((a+b)*c)-d^e^f";
	cout<<convert(infix)<<endl;

}