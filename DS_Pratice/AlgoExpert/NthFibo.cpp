#include<bits/stdc++.h>
using namespace std;
int fibo(int n){
	vector<int>dp(5);
	if(n <= 2){
		return n;
	}
	for(auto i : dp)
		cout<<i <<" ";
	// return fibo(n-1)+fibo(n-2)+fibo(n-3);
	return  5;
}
int main(){
	cout<<fibo(5);
}