#include <bits/stdc++.h>
using namespace std;

#define endl           "\n"
#define print(a)       for(auto x : a) cout << x << " "; cout << endl;
#define print2(a,x,y)  for(int i = x; i < y; i++) cout<< a[i]<< " "; cout << endl;

int recursive(vector<int>&price,vector<int>&weight,int size,int bagCapcity){
	//base case  
	if(bagCapcity == 0  or size == 0){
		return 0;
	}

	int include = 0;
	int exclude = 0;
	//recursive case either include one or exclude one 
	if( weight[size-1] <= bagCapcity){
		include = price[size-1] + recursive(price,weight,size-1,bagCapcity-weight[size-1]); 
	}
	exclude = recursive(price,weight,size-1,bagCapcity); 

	cout<<include<< " | "<< exclude<<endl;
	//then return max
	return max(include,exclude);
}

int tabular(vector<int>&price,vector<int>&weight,int size,int bagCapcity){
	vector<vector<int>> dp(size+1,vector<int>(bagCapcity+1,0));
	for(int i = 1 ; i <= size; i++){
		for(int j = 1; j<=bagCapcity;j++){
			//inc the just copy the upper number 
			if(j - weight[i-1] >= 0) {
				dp[i][j] = max(dp[i-1][j] ,dp[i-1][j- weight[i-1]]+price[i-1]);
			}else{
				dp[i][j] = dp[i-1][j];
			}
			
			
		}
	}
	for(auto x:dp){
		for(auto y:x){
			cout<<y<<" ";
		}
		cout<<endl;
	}
	return dp[size][bagCapcity];
}

void solve() {
	vector<int> price = {1,2,5,6};
	vector<int> weight = {2,3,4,5};

	int bagCapcity = 8;

	// cout << recursive(price,weight,price.size(),bagCapcity);
	cout << tabular(price,weight,price.size(),bagCapcity);








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