#include <bits/stdc++.h>
using namespace std;
void tree(int x){
	if (x>0)
	{
		cout<<x<<" ";
		tree(x-1);
		tree(x-1);
	}
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	int x;
	cin>>x;
	tree(x);

}
