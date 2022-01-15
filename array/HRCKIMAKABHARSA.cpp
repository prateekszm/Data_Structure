#include <bits/stdc++.h>
using namespace std;

#define int 		long long int
#define F 			first
#define S 			second
#define pb 			push_back
#define vi 			vector<int>
#define endl 		"\n"
#define	print(a)	for(auto x : a) cout<< x <<" "; cout<<endl;


void solve(){
	vi nums={1,2,5,1,3,9,6,2,1,4};
	map<int,int> mp;
	for(int i = 0;i<nums.size();i++){
		mp[nums[i]]++;
	}
	map<int,int>::iterator it =mp.begin();
	for(auto x :mp){
		if(x.S%2!=0){
			cout<<x.F<<" ";
		}
	}

}


int32_t main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	clock_t z = clock();
	int t = 1;
	// cin>> t;
	while (t--) solve();
	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);


	return 0;
}
