#include <bits/stdc++.h>
using namespace std;

#define int 		long long int
#define F 			first
#define S 			second
#define pb 			push_back
#define vi 			vector<int>
#define endl 		"\n"
#define	print(a)	for(auto x : a) cout<< x <<" "; cout<<endl;

vector<int> productExceptSelf(vector<int>& nums) {
	int n=nums.size();
    vi left(n,0);
    vi right(n,0);
    left[0]=nums[0];
    right[n-1]=nums[n-1];
    //left
    int leftp=nums[0];
    for(int i=1;i<n;i++){
    	leftp=leftp*nums[i];
    	left[i]=leftp;
    }
    print(left);
    int rightp=nums[n-1];
    for(int i=n-2;i>=0;i--){
    	rightp=rightp * nums[i];
    	right[i]=rightp;
    }
    vi output(n,0);
    // cout<<right[1]<<"r  l"<<left[n-2]<<endl;
    output[0]=right[1];
    output[n-1]=left[n-2];
    for(int i=1; i<n-1; i++){
    	
    	output[i]=left[i-1]*right[i+1];
    }
    print(right);    
    return output;
}

vector<int> productExceptSelf2(vector<int>& nums) {
	int n=nums.size();
	vi output(n,0);
	//left
	output[0]=1;
	for(int i=1;i<n;i++){
		output[i]=nums[i-1]*output[i-1];
	}
	// 1  2  3  4   5
	// 1  1  2  6   24
	print(output);
	
	int R=1;
	for(int i=n-1;i>=0;i--){
		output[i]=output[i]*R;
		R=R*nums[i];
	}
	return output;
}

void solve(){
	// cout<<"Hello";
	vi nums={1,2,3,4};
	vi output;
	output=productExceptSelf2(nums);
	print(output);

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
