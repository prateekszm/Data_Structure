#include <bits/stdc++.h>
using namespace std;

#define int 		long long int
#define F 			first
#define S 			second
#define pb 			push_back
#define vi 			vector<int>
#define endl 		"\n"
#define	print(a)	for(auto x : a) cout<< x <<" "; cout<<endl;

int minSubArrayLen(int k, vector<int>& nums) {
	int n=nums.size();
	int left=0,right=0;
	int currmin=INT_MAX;
	int m=INT_MAX;
	int csum=0;
	while(right<n and left<n){
		csum+=nums[right];
		while(csum>k){
			csum-=nums[left++];
		}
		if(csum==k){
			currmin=right-left+1;
			// cout<<currmin<<endl;
			m=min(currmin,m);
		}
		right++;
	}
	if(m==INT_MAX){
		return 0;
	}
	return m;
}
void solve(){
	vi nums={1,4,4,4};
	int k=4;
	cout<<minSubArrayLen(k,nums);

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
/*
Example 1:

Input: target = 7, nums = [2,3,1,2,4,3]
Output: 2
Explanation: The subarray [4,3] has the minimal length under the problem constraint.
Example 2:

Input: target = 4, nums = [1,4,4]
Output: 1
Example 3:

Input: target = 11, nums = [1,1,1,1,1,1,1,1]
Output: 0
 
*/