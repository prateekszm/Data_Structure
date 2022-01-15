#include <bits/stdc++.h>
using namespace std;

#define int 		long long int
#define F 			first
#define S 			second
#define pb 			push_back
#define vi 			vector<int>
#define endl 		"\n"
#define	print(a)	for(auto x : a) cout<< x <<" "; cout<<endl;

void dfs(int src, vector<bool>& visited, vector<vector<int>>& adjList){
    visited[src]=true;
    for(auto nbs:adjList[src]){
    	if(!visited[nbs])
    		dfs(nbs,visited,adjList);
    }
}

int makeConnected(int n, vector<vector<int>>& connections) {
    int cables=connections.size();
    if(cables<n-1)
        return -1;
    vector<bool> visited(n,false);
    int p=0;
    vector<vector<int>> adjList(n);
    //make the adj list 
    for(auto x:connections){
    	adjList[x[0]].push_back(x[1]);
    	adjList[x[1]].push_back(x[0]);
    }

    // print this shit
    // int i=0;
    // for(auto x:adjList){
    // 	cout<<i++<<"-> ";
    // 	for(int c:x){
    // 		cout<<c<<" ";
    // 	}
    // 	cout<<endl;
    // }
   
    for(int i=0;i<n;i++){
    	if(!visited[i]){
    		p++;
    		dfs(i,visited,adjList);
    	}
    }

    return p-1;
        
}

/*void dfs(int src, vector<bool>& visited, vector<vector<int>>& adjList){
    visited[src]=true;
    for(auto nbr : adjList[src]){
        if(!visited[nbr])
            dfs(nbr, visited, adjList);
    }
}
int makeConnected(int n, vector<vector<int>>& connections) {
        int cables=connections.size();
        if(cables<n-1)
            return -1;
        vector<bool> visited(n,false);
        int p=0;
        vector<vector<int>> adjList(n);
        for(auto e : connections){
            adjList[e[0]].push_back(e[1]);
                adjList[e[1]].push_back(e[0]);
	// 0 1 2 3
	// 1 0 2
	// 2 1
	// 3 1 0
	//
        }
        for(int i=0; i<n; i++){
            if(!visited[i]){
                p++;
                dfs(i,visited,adjList);
            }
        }
        return p-1;
    }
    */

    
    


void solve(){
	vector<vector<int>> connections={{0,1},{0,2},{0,3},{1,2},{1,3}};
	int computer=6;
	cout<<makeConnected(computer,connections);
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
