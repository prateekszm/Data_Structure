#include <bits/stdc++.h>
using namespace std;
void print(int x){
	if(x>0){
		cout<<x<<" ";
		print(x-1);
		cout<<endl;
		cout<<x<<" ";
	}
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	print(3);

}
