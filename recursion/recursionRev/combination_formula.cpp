#include <bits/stdc++.h>
using namespace std;
int fact(int n){
	if(n==0){
		return 1;
	}
	return fact(n-1)*n;
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	int n=18;
	int r=3;
	int t1,t2,t3;
	t1=fact(n);
	t2=fact(r);
	t3=fact(n-r);
	cout<<(t1/(t2*t3));
}


/*
				ncr=n!/
					r!(n-r)!

*/
	










	