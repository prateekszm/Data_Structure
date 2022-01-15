#include <bits/stdc++.h>
using namespace std;
int fibo(int num,vector<int>dparr){
	if(num<=1){
		return num;
	}
	if(!dparr[num]==0){
		return dparr[num];
	}

	return dparr[num]=fibo(num-1,dparr)+fibo(num-2,dparr);
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	int num=5;
	vector<int> dparr(5,0);
	cout<<fibo(num,dparr);
}
