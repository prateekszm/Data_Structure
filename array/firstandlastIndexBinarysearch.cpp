#include <bits/stdc++.h>
using namespace std;

#define int 		long long int
#define F 			first
#define S 			second
#define pb 			push_back
#define vi 			vector<int>
#define endl 		"\n"
#define	print(a)	for(auto x : a) cout<< x <<" "; cout<<endl;
int firstIndex(vi &nums,int target){
	int index=-1;
	int l=0;
	int r=nums.size()-1;
	while(l<=r){
		int mid=(l+r)/2;
		if(nums[mid]>=target){
			r=mid-1;
		}else{
			l=mid+1;					//1 2 3 5 6 6 6 6 7 8 9 10
		}
		if(nums[mid]==target) index=mid;
	}
	return index;
}

int secondIndex(vi &nums,int target){
	int index=-1;
	int l=0;
	int r=nums.size()-1;
	while(l<=r){
		int mid=(l+r)/2;
		if(nums[mid]<=target){
			l=mid+1;
		}else{
			r=mid-1;
		}
		if(nums[mid]==target) index=mid;
	}
	return index;
}


vector<int> searchRange(vector<int>& nums, int target) {
    if(nums.size()==0){
    	return {-1,-1};
    }
    vi op(2);
    op[0]=firstIndex(nums,target);
    op[1]=secondIndex(nums,target);
    return op;

}
void solve(){
	vi nums={8,8,8,8,8,8,8,8,8};
	int key;
	cin>>key;
	vi op=searchRange(nums,key);
	print(op);

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
