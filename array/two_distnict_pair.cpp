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
	int sum=2;
	// vi arr={10,5,2,3,-6,9,11};
	vi arr={3,1,4,2,4,1,5};
	unordered_set<int> s;
	int count=0;
	for (int i = 0; i < arr.size(); ++i)
	{
		if(s.find(arr[i])==s.end()){
			int x=sum+arr[i];
			if(s.find(x) != s.end()){
				count++;
			}
			s.insert(arr[i]);
		}
	}
	cout<<count;
	// print(sol);

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
