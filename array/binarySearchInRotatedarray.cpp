#include <bits/stdc++.h>
using namespace std;

#define int 		long long int
#define F 			first
#define S 			second
#define pb 			push_back
#define vi 			vector<int>
#define endl 		"\n"
#define	print(a)	for(auto x : a) cout<< x <<" "; cout<<endl;
int search(vector<int>& nums, int target) {
    int n=nums.size();
    int l=0;
    int r=n-1;
    
    while(l<=r){
        int mid=(l+r)/2;
        
        if(nums[mid]==target){
            return mid;
        }
        if(nums[l] <= nums[mid]){
        	if(nums[l]<=target and nums[mid]>=target){
        		r=mid-1;
        	}else{
        		l=mid+1;
        	}
        }else{
        	if(nums[r]>=target and nums[mid]<=target){
        		l=mid+1;
        	}else{
        		r=mid-1;
        	}
        }
    }
      
    return -1;
}

void solve(){
	vi nums={4,5,6,7,0,1,2};
	int key;
	cin>>key;
	cout<<search(nums,key)<<endl;
}


int32_t main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	clock_t z = clock();
	int t = 1;
	cin>> t;
	while (t--) solve();
	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);


	return 0;
}
