#include <bits/stdc++.h>
using namespace std;

#define int 		long long int
#define F 			first
#define S 			second
#define pb 			push_back
#define vi 			vector<int>
#define endl 		"\n"
#define	print(a)	for(auto x : a) cout<< x <<" "; cout<<endl;
int findMin(vector<int>& nums) {
	if(nums.size()==1){
		return nums[0];
	}
    int l=0;
    int mini=INT_MAX;
    int r=nums.size()-1;
   	while(l<=r){
    	int mid=(l+r)/2;
    	if(nums[l]<=nums[mid] ){
    		mini=min(mini,nums[l]);
    		l=mid+1;
    	}else if(nums[mid]<=nums[r]){
    		mini=min(mini,nums[mid]);
    		r=mid-1;
    	}
    }
    return mini;
}

void solve(){
	vi arr={5,1,2,3,4};
	cout<<findMin(arr);

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
