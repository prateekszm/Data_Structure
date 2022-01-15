#include <bits/stdc++.h>
using namespace std;

#define int 		long long int
#define F 			first
#define S 			second
#define pb 			push_back
#define vi 			vector<int>
#define endl 		"\n"
#define	print(a)	for(auto x : a) cout<< x <<" "; cout<<endl;


void solve(){
	vi nums={0,0,1,1,1,2,2,3,3,3,4,4,4,4,4,4,4,4};
	/*unordered_set<int> sh;
	for(int x:nums){
		sh.insert(x);
	}*/
	int size=0;
	int i=0,j=1;
	while(i<nums.size() and j<nums.size()){
		if(nums[i]!=nums[j]){
			size++;
			i=j;
			j++;
		}
		j++;
	}
	cout<<size+1;

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
