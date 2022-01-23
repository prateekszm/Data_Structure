/*
NOTE : without checking stack is empty never pop or peek at top
	   that thing is not checked in stack.h file so check it by your self 
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include "stack.h"
using namespace std;

#define int 		long long int
#define F 			first
#define S 			second
#define pb 			push_back
#define vi 			vector<int>
#define endl 		"\n"
#define	print(a)	for(auto x : a) cout<< x <<" "; cout<<endl;

void pranthesisChecking(){
	Stack<char> st;
	string s = "a+b(x-y)*{y+3}+[heroAlom]";
	// string s = ")))";
	int i = 0; 
	while(i<s.size()){
		if(s[i] =='(' || s[i] == '{' || s[i] == '<'|| s[i] == '['){
			st.push(s[i]);
		}
		if(s[i] ==')' || s[i] == '}' || s[i] == '>'|| s[i] == ']'){
			if(st.isEmpty()){
				cout<<"Invalid "<<endl;
				return;
			}
			if((st.top()=='(' && s[i] == ')') ||
				(st.top()=='{' && s[i] == '}') ||
				(st.top()=='<' && s[i] == '>') ||
				(st.top()=='[' && s[i] == ']')
				){
				st.pop();
			}
		}
		i++;
	}
	// st.display();
	if(st.isEmpty()){
		cout<<"valid"<<endl;
	}else
		cout<<"invalid"<<endl;

}

bool isOperand(char c){
	if(c == '+' || c == '/' ||c == '*' ||c == '-' ){
		return false;
	}else if(c == '(' || c == ')'){
		return false;
	}
	return true;
}
int pre(char ch){
	if(ch == '+' ||ch == '-'){
		return 1;
	}else if(ch == '*' ||ch == '/'){
		return 2;
	}

	return 0;
}

void infixtopostfix(){
	Stack<char> st;
	st.push('#');
	vector<char> arr;
	// string s = "(a+b*c)";
	string s = "3*5+6/2-4";
	// string s = "a+b*c-d/e";
	int i =0;
	while(s[i]!='\0'){
		if(isOperand(s[i])){
			arr.pb(s[i++]);
		}else if(s[i]=='('){
			st.push(s[i++]);
		}else if(s[i]==')'){
			while(st.top()!='('){
				arr.pb(st.top());
				st.pop();
			}
			st.pop();
			i++;
		}
		else{  //operator
			if(pre(s[i]) > pre(st.top())){
				st.push(s[i++]);
			}else{
				// while(pre(st.top()))
				arr.pb(st.top());
				st.pop();
			}
		}
	}

	while(!st.isEmpty()){
		arr.pb(st.top());
		st.pop();
	}
	arr.erase(arr.begin()+arr.size()-1);

	cout<<"Your Postfix is : ";
	for(auto x:arr){
		cout<<x;
	}
	cout<<endl;
}

void infixToPrefix(){
	// string s = "a+b*(c-d-e)/(f+g*h)-i";
	string s = "x+y*z/w+u";
	reverse(s.begin(),s.end());
	for(int i = 0;i < s.size();i++){
		if(s[i] == '(')
			s[i] = ')'; 
		else if(s[i] == ')')
			s[i] = '(';
	}
	// for(auto x : s) cout<<x;

	//Do normal infix to postfix  //i-(h*g+f)/(e-d-c)*b+a
	Stack<char> st;               //i-(h*g+f)/(e-d-c)*b+a
	vector<char> prefix;
	st.push('#');
	int i= 0;
	while(s[i]!='\0'){
		if(isOperand(s[i])){
			prefix.pb(s[i++]);
		}else if(s[i] == '('){
			st.push(s[i++]);
		}else if(s[i] == ')'){
			while(st.top()!='('){
				prefix.pb(st.top());
				st.pop();
			}
			st.pop();
			i++;
		}else{  // now it is operand
			if(pre(s[i])>pre(st.top())){  //greater  push back to stack
				st.push(s[i++]);
			}else{
				prefix.pb(st.top());
				st.pop();
			}
		}
	}
	while(!st.isEmpty()){
		prefix.pb(st.top());
		st.pop();
	}
	prefix.erase(prefix.begin()+prefix.size()-1);

	reverse(prefix.begin(),prefix.end());

	for(auto ch : prefix){
		cout<<ch;
	}
	cout<<endl;
}

int operation(int a,int b,char symbol){
	if(symbol == '+'){
		return b+a;
	}else if(symbol == '-'){
		return b-a;
	}else if(symbol == '*'){
		return b*a;
	}else if(symbol == '/'){
		return b/a;
	}

	return 69;
}

void evalPostfix(){
	Stack<int> st;
	// string postfix =  "234*+82/-";
	string postfix =  "35*62/+4-";
	for(int i = 0;postfix[i]!='\0';i++){
		if(isOperand(postfix[i])){
			st.push(postfix[i]-'0');
		}else{
			int a = st.top(); st.pop();
			int b = st.top(); st.pop();
			int res = operation(a,b,postfix[i]);
			st.push(res);
		}
	}

	cout<<st.top()<<endl;
	st.pop();
}

void evalPrefix(){                                       /*simple just reverse the string and do postfix*/
	string prefix = "*+69-31";
	reverse(prefix.begin(),prefix.end());
	// print(prefix);
	Stack<int> st;
	for(int i = 0;prefix[i]!='\0';i++){
		if(isOperand(prefix[i])){
			st.push(prefix[i]-'0');
		}else{
			int a = st.top(); st.pop();
			int b = st.top(); st.pop();
			int res = operation(b,a,prefix[i]);
			st.push(res);
		}
	}

	cout<<st.top()<<endl;
	st.pop();
}

void evalInfix(){

}

int32_t main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	// pranthesisChecking();  //working fine
							/*a=b=c this postfix will be abc==*/
	// infixtopostfix();			//working fine

	// infixToPrefix();  // reverse the string and do postfix and reverse the output ha ha easy

	// evalPostfix();

	// evalPrefix();  //Reverse the string and do Postfix eval;

	/*Lets try to evaluate infix notation */



	

	return 0;
}