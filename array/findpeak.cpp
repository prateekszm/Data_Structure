#include <bits/stdc++.h>
using namespace std;

#define int 		long long int
#define F 			first
#define S 			second
#define pb 			push_back
#define vi 			vector<int>
#define endl 		"\n"
#define	print(a)	for(auto x : a) cout<< x <<" "; cout<<endl;

int findPeakElement(vector<int>& nums) {
   int l=0,r=nums.size()-1;
   // cout<<r<<endl;
   while(l<r){
   		int mid=l+(r-l)/2;//avoid integer overflow;
   		if(nums[mid]<nums[mid+1]){
   			l=mid+1;
   		}else{
   			r=mid;
   		}
  	}
  	return l;
}
void solve(){
	vi arr={5,6,8,16,17,18,19};
	cout<<findPeakElement(arr);

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
