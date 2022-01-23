#include<iostream>
#include<vector>
#include <algorithm>
#include "stack.h"

bool isOperand(char ch){
	if(ch == '+' ||ch == '-' ||ch == '/' ||ch == '*' ||ch == '(' ||ch == ')'){
		return false;
	}

	return true;
}


int pre(char ch){
	if(ch == '*' ||ch == '/'){
		return 2;
	}
	if(ch == '-' || ch =='+'){
		return 1;
	}

	return 69;
}

int evaluate(int a,int b,char symbol){
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

int evalInfix(string &str){
	Stack<char> opetr;
	Stack<int> operand;
	for(int i = 0; str[i]!='\0';i++){
		if(isOperand(str[i])){
			operand.push(str[i]-'0');
		}else if(str[i]=='('){
			opetr.push('(');
		}else if(str[i]==')'){  //pop every element and do calculation
			while(opetr.top()!='('){
				int a = operand.top(); operand.pop();
				int b = operand.top(); operand.pop();
				//now do operation
				char ch = opetr.top(); opetr.pop();
				int res = evaluate(a,b,ch);
				operand.push(res);
			}
			opetr.pop();
		}else{  //operatoe encountered   operator 
			//Higher pre operator is going to solve and 
			while(!opetr.isEmpty() and opetr.top()!='(' and pre(str[i])<=pre(opetr.top())){
				int a = operand.top(); operand.pop();
				int b = operand.top(); operand.pop();
				//now do operation
				char ch = opetr.top(); opetr.pop();
				int res = evaluate(a,b,ch);
				operand.push(res);
			}
			opetr.push(str[i]);
		}
	}
	while(!opetr.isEmpty()){
		int a = operand.top(); operand.pop();
		int b = operand.top(); operand.pop();
		//now do operation
		char ch = opetr.top(); opetr.pop();
		int res = evaluate(a,b,ch);
		operand.push(res);
	}

	// cout<<operand.top();
	return operand.top();

}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string str;
	cin>>str;
	cout<<evalInfix(str);
}

/*
https://leetcode.com/problems/basic-calculator/discuss/62432/AC-C%2B%2B-solution-with-two-stacks.
*/