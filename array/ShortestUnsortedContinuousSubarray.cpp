#include <bits/stdc++.h>
using namespace std;

#define int 		long long int
#define F 			first
#define S 			second
#define pb 			push_back
#define vi 			vector<int>
#define endl 		"\n"
#define	print(a)	for(auto x : a) cout<< x <<" "; cout<<endl;

bool isOutOfBound(vector<int>& nums,int i){
	int x=nums[i];
	if(i==0){
		return x > nums[i+1];
	}
	if(i==nums.size()-1){
		return x < nums[i-1];
	}

	return x < nums[i-1] or x > nums[i+1];
}

int findUnsortedSubarray(vector<int>& nums) {
	if(nums.size()==0 or nums.size()==1){
	    return 0;
	}
	int n=nums.size();
	int lowest=INT_MAX,highest=INT_MIN;
	for(int i=0;i<n;i++){
		int x=nums[i];
		if(isOutOfBound(nums,i)){
			lowest=min(lowest,x);
			highest=max(highest,x);
		}
	}
	if(lowest==INT_MAX){
		return 0;
	}
	int i=0,j=n-1;
	while(lowest>=nums[i]){
		i++;
	}
	while(highest<=nums[j]){
		j--;
	}

	cout<<lowest<<"  "<<highest<<endl;
	cout<<i<<" "<<j<<endl;

	return j-i;
}

void solve(){
	vi nums={1,2,3,4,5,8,6,7,9,10,11};
	int answer =findUnsortedSubarray(nums);
	cout<<answer<<endl;


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
