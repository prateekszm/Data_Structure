#include <bits/stdc++.h>
using namespace std;

#define int 		long long int
#define F 			first
#define S 			second
#define pb 			push_back
#define vi 			vector<int>
#define endl 		"\n"
#define	print(a)	for(auto x : a) cout<< x <<" "; cout<<endl;

int minimumSwaps(vector<int> arr) {
	int n=arr.size();
	pair<int,int> ap[n];
	int answer=0;
	for (int i = 0; i < n; ++i)
	{	
		ap[i].first=arr[i];
		ap[i].second=i;
	}
	sort(ap,ap+n);
	
	vector<bool> visited(n,false);
	for(int i=0;i<n;i++){		
		//if index is visited do nothing
		int old_positon=ap[i].second;
		if(visited[old_positon]==true or old_positon==i){
			continue;
		}
		// if index is not visited do ligma
		int count=0;
		int node=i;
		while(!visited[node]){
			visited[node]=true;
			int next_node=ap[node].second;
			node=next_node;
			count+=1;
		}
		answer+=(count-1);
		
	}


	return answer;
}

void solve(){
	vector<int>arr={1,3, 5, 2, 4, 6, 7};
	cout<<minimumSwaps(arr);
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
