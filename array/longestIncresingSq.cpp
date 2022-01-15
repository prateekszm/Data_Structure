#include <bits/stdc++.h>
using namespace std;

#define int 		long long int
#define F 			first
#define S 			second
#define pb 			push_back
#define vi 			vector<int>
#define endl 		"\n"
#define	print(a)	for(auto x : a) cout<< x <<" "; cout<<endl;

//binary search NlogN
void solve(){
	vector<int> arr={4,5,8,2,5,9,10,11,12,13,14,9,10};
	vi sq;
	sq.pb(arr[0]);
	for(int i=1;i<arr.size();i++){
		if(sq.back()<arr[i]){
			sq.pb(arr[i]);
		}else{
			int index=lower_bound(sq.begin(),sq.end(),arr[i])-sq.begin();
			sq[index]=arr[i];
		}
	}
	cout<<sq.size();

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
