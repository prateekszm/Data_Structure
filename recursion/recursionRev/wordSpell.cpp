#include <bits/stdc++.h>
using namespace std;
string spell[]={"zero","one","two","three","four","five","six","seven","eight","nine"};

void spelling(int n){
	if(n==0){
		return; }

	int index=n%10;
	spelling(n/10);
	cout<<spell[index]<<" ";
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	spelling(1023);

}
