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
	int n;
	cin>>n;
	int x;
	int arr[n];
	for(int i =0 ;i<n;i++){
		cin>>x;
		arr[i]=x;
	}
	sort(arr,arr+n);
	int d = arr[n-1]- arr[0];
	cout<<d<<endl;

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
