#include <bits/stdc++.h>
using namespace std;
int fun(int n){
	if(n>0){
		return fun(n-1)+n;
	}

	return 0;
}

int fun2(int x){
	static int n=0;
	if(x>0){
		n++;
		return fun2(x-1) + n;
	}
	return 0;
}
int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	// cout<<fun(5);
	cout<<fun2(5);

}
