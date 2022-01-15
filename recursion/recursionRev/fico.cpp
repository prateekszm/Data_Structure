#include <bits/stdc++.h>
using namespace std;
int f[100];
int fibo(int n){
	if(n<=1){
		f[n]=n;
		return n;
	}
	if(f[n-2]==-1){
		f[n-2]=fibo(n-2);
	}
	if(f[n-1]==-1){
		f[n-1]=fibo(n-1);
	}
	return f[n-1]+f[n-2];
}

int fib(int n){
	if(n<=1){
		return n;
	}
	return fib(n-2)+fib(n-1);
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	memset(f,-1,sizeof(f));
	cout<<fib(20);

}
