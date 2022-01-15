#include <bits/stdc++.h>
using namespace std;
double epowx(int x,int n){
	static double p=1,f=1;
	int r;
	if(n==0){
		return 1;
	}
		r=epowx(x,n-1);
		p=p*x;
		f=f*n;
		return r+p/f;
	
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	cout<<epowx(3,10);

}
