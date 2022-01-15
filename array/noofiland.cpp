#include <bits/stdc++.h>
using namespace std;

#define int 		long long int
#define F 			first
#define S 			second
#define pb 			push_back
#define vi 			vector<int>
#define endl 		"\n"
#define	print(a)	for(auto x : a) cout<< x <<" "; cout<<endl;

void dfs(vector<vector<int>> &map,int i,int j,int row,int col){
	if (i < 0 || j < 0 || i > (row - 1) || j > (col - 1) || map[i][j] != 1){
		return;
	}
	if(map[i][j]==1){
		map[i][j]=0;
		dfs(map,i+1,j,row,col);
		dfs(map,i-1,j,row,col);
		dfs(map,i,j+1,row,col);
		dfs(map,i,j-1,row,col);
	}

	
}

int numIsIsland(vector<vector<int>> &map){
	int row=map.size();
	int col=map[0].size();
	int count=0;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			if(map[i][j]==1){
				map[i][j]=0;
				count++;
				dfs(map,i+1,j,row,col);
				dfs(map,i-1,j,row,col);
				dfs(map,i,j+1,row,col);
				dfs(map,i,j-1,row,col);
			}
		}
		
	}
	return count;
}

void solve(){
	vector<vector<int>> map={{1, 1, 0, 0, 0},
                   			 {0, 1, 0, 0, 1},
                   			 {1, 0, 0, 1, 1},
                             {0, 0, 0, 0, 0},
                   			 {1, 0, 1, 0, 1}};
    int x=numIsIsland(map);
    cout<<x<<endl;
    // for(auto l:map){
    // 	for(auto v:l){
    // 		cout<<v<<" ";
    // 	}
    // 	cout<<endl;
    // }

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
