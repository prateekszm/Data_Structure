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

	return 0;
}

int evalInfix(string &str){
	cout<<str;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string str;
	cin>>str;
	cout<<evalInfix(string)
}