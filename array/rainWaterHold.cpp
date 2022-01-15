#include <bits/stdc++.h>
using namespace std;

#define int 		long long int
#define F 			first
#define S 			second
#define pb 			push_back
#define vi 			vector<int>
#define endl 		"\n"
#define	print(a)	for(auto x : a) cout<< x <<" "; cout<<endl;
int trap(vector<int>& height) {
	int tapedWater=0;
      int n=height.size();
      vi right(n,0);  
      vi left(n,0);

      //filling left and right values highest 
      left[0]=height[0];
      right[n-1]=height[n-1];
    for(int i=1;i<n;i++){
      	left[i]=max(left[i-1],height[i]);
      	right[n-1-i]=max(right[n-i],height[n-1-i]);
    } 
    for(int i=0;i<n;i++){
    	tapedWater+=min(left[i],right[i])-height[i];
    }

   

      return tapedWater;

}

void solve(){
	vi height={4,2,0,3,2,5};
	int vol=trap(height);
	cout<<vol;

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
