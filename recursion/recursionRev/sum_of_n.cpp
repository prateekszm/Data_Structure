#include <bits/stdc++.h>
using namespace std;
int fun(int n){
	if(n==0){
		return 0;
	}
	return fun(n-1)+n;

}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	
	cout<<fun(5);
}
