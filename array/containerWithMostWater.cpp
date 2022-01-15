#include <bits/stdc++.h>
using namespace std;

#define int 		long long int
#define F 			first
#define S 			second
#define pb 			push_back
#define vi 			vector<int>
#define endl 		"\n"
#define	print(a)	for(auto x : a) cout<< x <<" "; cout<<endl;


int maxArea(vector<int>& height) {
	int n=height.size();
	int maxvol=0;
	// int i=0,j=n-1;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			int minimum=min(height[i],height[j]);
			minimum=minimum*(j-i);
			maxvol=max(minimum,maxvol);
			// cout<<i<<" "<<j<<"->"<<maxvol<<endl;
		}
	}
	return maxvol;

}
int maxArea2(vector<int>& height) {
	int n=height.size();
	int maxvol=0;
	int i=0,j=n-1;
	while(i<j){
		//calculate the volume
		int minimum=min(height[i],height[j]);
		minimum=minimum*(j-i);
		maxvol=max(minimum,maxvol);
		if(height[i]<height[j]){
			i++;
		}else if(height[j]<height[i]){
			j--;
		}else{
			i++;
		}
	}
	
	return maxvol;

}

void solve(){
	// vi heights={1,8,6,2,5,4,8,3,7};
	vi heights={1,3,2,5,25,24,5};
	int maxWater=maxArea2(heights);
	cout<<maxWater<<endl;
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
