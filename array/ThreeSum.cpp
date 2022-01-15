#include <bits/stdc++.h>
using namespace std;

#define int 		long long int
#define F 			first
#define S 			second
#define pb 			push_back
#define vi 			vector<int>
#define endl 		"\n"
#define	print(a)	for(auto x : a) cout<< x <<" "; cout<<endl;
vector<vector<int>> threeSum(vector<int>& nums) {
	vector<vector<int>> ans;
	sort(nums.begin(),nums.end());
	int n=nums.size();
	for(int i=0;i<n;i++){
		int a=nums[i];
		int t=-a;
		int s=i+1;
		int e=n-1;
		while(s<e){
			if(nums[s]+nums[e]==t){
				ans.push_back({nums[i],nums[s],nums[e]});
				while(s<e && nums[s]==nums[s+1] ) s++;
				while(s<e && nums[e]==nums[e-1] ) e--;
				s++;
				e--;
			}else if(nums[s]+nums[e]>t){
				e--;
			}else{
				s++;
			}
		}
		while(i+1<n && nums[i]==nums[i+1] ) i++;

	}
	return ans;
}

void solve(){
	vi nums={0,0,0,0};
	vector<vector<int>> l=threeSum(nums);
	for(auto x:l){
		for(int c:x){
			cout<<c<<" ";
		}
		cout<<endl;
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
