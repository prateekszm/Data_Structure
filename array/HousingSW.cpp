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
	vi arr={1,3,4,5,7,8,2,3,5,7,1,2,3,5,3,7,8,1,2,3,4,5,67,4,4,2,1,3,2};
	int i=0,j=0;
	int k=8;
	vector<pair<int,int>>sl;
	int sum=0;
	int smallest=INT_MAX;
	while( j<arr.size()){
		sum+=arr[j];
		j++;
		while(sum>k and i<j){
			sum-=arr[i];
			i++;
		}
		if(sum==k){
			// cout<<i<<" ->"<<j-1<<endl;
			sl.pb(make_pair(i,j-1));
			int x=j-i;
			smallest=min(smallest,x);
			// cout<<smallest<<endl;

		}
	}
	for(auto x:sl){
		cout<<x.F<<" "<<x.S<<endl;
	}

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
