#include <bits/stdc++.h>
using namespace std;

#define int 		long long int
#define F 			first
#define S 			second
#define pb 			push_back
#define vi 			vector<int>
#define endl 		"\n"
#define	print(a)	for(auto x : a) cout<< x <<" "; cout<<endl;
vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
	vector<vector<int>> output;
	int n=intervals.size();
	int i=0;
	//inserting the prev non overlaping
	while(i<n and intervals[i][1]<newInterval[0]) output.push_back(intervals[i++]);
	//clearing the ovarlaping conflit
	vector<int> olp=newInterval;
	while(i<n and intervals[i][0] <= newInterval[1]){
		olp[0]=min(intervals[i][0],olp[0]);
		olp[1]=max(intervals[i++][1],olp[1]);
	}
	output.push_back(olp);
	while(i<n) output.push_back(intervals[i++]);


	return output;
        
}

void solve(){
	vector<vector<int>> input={{1,2},{3,5},{6,7},{8,10},{12,16}};
	vector<int> newInterval={4,8};
	vector<vector<int>> output=insert(input,newInterval);
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
