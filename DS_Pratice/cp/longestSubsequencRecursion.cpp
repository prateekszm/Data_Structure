#include <bits/stdc++.h>
using namespace std;

#define endl           "\n"
#define print(a)       for(auto x : a) cout << x << " "; cout << endl;
#define print2(a,x,y)  for(int i = x; i < y; i++) cout<< a[i]<< " "; cout << endl;

int find(string s1,string s2,int r,int c){
	if(r == 0 or c == 0){
		return 0;
	}

	if(s1[r-1] == s2[c-1]){
		return 1+ find(s1,s2,r-1,c-1);
	}
	
	return max(find(s1,s2,r-1,c) , find(s1,s2,r,c-1));

}

int findWithMemo(string s1,string s2,int r,int c){
	if(r == 0 or c == 0){
		return 0;
	}

	if(s1[r-1] == s2[c-1]){
		return 1+ find(s1,s2,r-1,c-1);
	}
	
	return max(find(s1,s2,r-1,c) , find(s1,s2,r,c-1));

}

void solve() {
	string str1 = "longest"; //row full be
	string str2 = "stone"; //col full
	// cout<<str1.size();
	vector<vector<int>>dp(str2.size()+1,vector<int> (str1.size()+1));
	int row = str2.size();
	int col = str1.size();

	cout<< find(str1,str2,row,col);


}

int32_t main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	clock_t z = clock();
	int t = 1;
	// cin >> t;
	while (t--) solve();
	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);
	return 0;
}