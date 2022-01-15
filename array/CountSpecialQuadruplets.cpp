#include <bits/stdc++.h>
using namespace std;

#define int 		long long int
#define F 			first
#define S 			second
#define pb 			push_back
#define vi 			vector<int>
#define endl 		"\n"
#define	print(a)	for(auto x : a) cout<< x <<" "; cout<<endl;


int countQuadruplets(vector<int>&nums){
	int count=0;
	int n=nums.size();
	unordered_set<int> s;
	for(int x:nums){
		s.insert(x);
	}
	//bullshit question

	return count;
}

void solve(){

	int n=4;
	cin >> n;
	cout<<n;

	vi arr;
	for(int i=0;i<n;i++){
		int y;
		cin>>y;
		arr.pb(y);
	}
	for(auto x:arr){
		cout<<x<<" ";
	}
	// int count=countQuadruplets(arr);
	// cout<<count<<endl;

}


int32_t main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	int t = 1;
	// cin>> t;
	while (t--) solve();

	return 0;
}
/*
5
3 3 6 4 5
5
3 3 6 4 5
*/