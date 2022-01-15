#include <bits/stdc++.h>
using namespace std;

#define int 		long long int
#define F 			first
#define S 			second
#define pb 			push_back
#define vi 			vector<int>
#define endl 		"\n"
#define	print(a)	for(auto x : a) cout<< x <<" "; cout<<endl;

int numSubarrayProductLessThanK(vector<int>& nums, int k) {
    int n=nums.size();
    int right=0,left=0;
    int currpro=1;
    int ans=0;
    if(k==0){
    	return 0;
    }
    while(right<n and left<n){
    	//we have to add in each iteration
    	currpro=currpro*nums[right];
    	while(currpro>=k){
    		currpro/=nums[left++];
    		
    	}
    	if(left<=right){
    		ans+=(right-left)+1;
    	}
    	right++;
    }
    return ans;
}
int numSubarrayProductLessThanK2(vector<int>& nums, int k) {
        if(k<=1) return 0;
        int ans=0, product=1, left=0;
        
        for(int right=0; right<nums.size(); right++){
            product *= nums[right];   //Multiply the product with the current number
            
            while(product>=k){
                product = product/nums[left]; /*If the product comes out to be >= k, slide the window and divide the product by nums[l] (Since, we only want product of a contiguous subarray)*/
                left++;
            }  

            ans += right - left + 1; /*Each time add to ans the element itself
            (Each element is a subarray) and extra (right-left) subarrays. */
        }
        return ans;
        
    }

void solve(){
	vi nums={1, 1, 1, 1, 1};
	cout<<numSubarrayProductLessThanK(nums,1)<<endl;
	cout<<numSubarrayProductLessThanK2(nums,1);

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
