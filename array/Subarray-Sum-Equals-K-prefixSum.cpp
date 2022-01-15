#include <bits/stdc++.h>
using namespace std;

#define int 		long long int
#define F 			first
#define S 			second
#define pb 			push_back
#define vi 			vector<int>
#define endl 		"\n"
#define	print(a)	for(auto x : a) cout<< x <<" "; cout<<endl;
int subarraySum(vector<int>& nums, int k) {
	int n=nums.size();
	unordered_map<int,int> um;
	int prefix_sum=0;
	um[0]++;
	int res=0;
	for(int i=0;i<n;i++){
		prefix_sum+=nums[i];
		res+=um[prefix_sum-k];
		um[prefix_sum]++;
	}
	cout<<endl;
	cout<<endl;
	cout<<um.size()<<endl;

	for(auto it:um ){
		cout<<it.F<<" ->"<<it.S<<endl;
	}
	return res;
}


void solve(){
	vi num={3,2,1,4,1,2,3,4,-3,2};
	int k=3;	
	cout<<subarraySum(num,k);
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
