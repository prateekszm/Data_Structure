#include <bits/stdc++.h>
using namespace std;

#define int 		long long int
#define F 			first
#define S 			second
#define pb 			push_back
#define vi 			vector<int>
#define endl 		"\n"
#define	print(a)	for(auto x : a) cout<< x <<" "; cout<<endl;
vector<vector<int>> merge(vector<vector<int>>& intervals) {
	int n=intervals.size();
	sort(intervals.begin(),intervals.end());
	vector<vector<int>> ligma;
	for (auto interval : intervals)
	{
		if(ligma.empty() or  ligma.back()[1]<interval[0]){
			ligma.pb(interval);
		}else{
			ligma.back()[1]=max(ligma.back()[1],interval[1]);
		}
	}
	return ligma;

}
/*
vector<vector<int>> merged;
        for (auto interval : intervals) {
            // if the list of merged intervals is empty or if the current
            // interval does not overlap with the previous, simply append it.
            if (merged.empty() || merged.back()[1] < interval[0]) {
                merged.push_back(interval);
            }
            // otherwise, there is overlap, so we merge the current and previous
            // intervals.
            else {
                merged.back()[1] = max(merged.back()[1], interval[1]);
            }
        }
        return merged;
*/
void solve(){
	vector<vector<int>> intervals={{1,2},{3,5},{6,7},{8,10},{12,16},{4,8}};
	vector<vector<int>> output;
	output=merge(intervals);
	for(auto z:output){
		for(auto x:z){
			cout<<x<<" ";
		}
		cout<<endl;
	}

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
