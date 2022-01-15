#include <bits/stdc++.h>
using namespace std;

#define int 		long long int
#define F 			first
#define S 			second
#define pb 			push_back
#define vi 			vector<int>
#define endl 		"\n"
#define	print(a)	for(auto x : a) cout<< x <<" "; cout<<endl;

vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
    vector<vector<int>> list;
    int n=firstList.size();
    int n2=secondList.size();
    int i=0,j=0;
    while(i<n and j<n2){
    	if(firstList[i][1]>= secondList[j][0] and firstList[i][0]<=secondList[j][1]){
    		list.push_back({max(firstList[i][0],secondList[j][0]),min(firstList[i][1],secondList[j][1])});
    	}
    	firstList[i][1]<secondList[j][1] ? i++ : j++;
    }
    for(auto x:list){
    	for(auto element:x){
    		cout<<element<<" ";
    	}
    	cout<<endl;
    }
    cout<<"nothing";

    return list;
}

void solve(){
	vector<vector<int>> l1={{1,3},{5,9}};
	vector<vector<int>> l2;
	intervalIntersection(l1,l2);


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
