#include <bits/stdc++.h>
using namespace std;
void funb(int x);
void funa(int x){
	if(x>0){
		cout<<x<<" ";
		funb(x-1);
	}
	return;
}
void funb(int x){
	if(x>0){
		cout<<x<<" ";
		funa(x/2);
	}
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	funa(20);

}
