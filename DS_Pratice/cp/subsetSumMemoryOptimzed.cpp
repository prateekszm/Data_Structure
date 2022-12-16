#include <bits/stdc++.h>
using namespace std;

#define endl           "\n"
#define print(a)       for(auto x : a) cout << x << " "; cout << endl;
#define print2(a,x,y)  for(int i = x; i < y; i++) cout<< a[i]<< " "; cout << endl;

vector<vector<int>> memo(5,vector<int>(13,-1));
//left to right 
bool subsetSum(vector<int>&arr,int size,int sum){
	//base case
	if(size == arr.size()){
		if(sum != 0) return false;
		return (sum == 0);
	}

	//rec case
	bool inc = false;
	//include
	if(sum >= arr[size]){
		//cout<<"rined ";
		inc = subsetSum(arr,size+1,sum-arr[size]);
	}
	bool exc = subsetSum(arr,size+1,sum);

	return (inc or exc);
	
}
bool rightToLeft(vector<int>&arr,int size,int sum){
	//base case
	if(size == -1){
		//cout<<(sum == 0)<<endl;
		return (sum == 0);
	}

	if(sum == 0){
		return true;
	}

	if(memo [size][sum] != -1) return memo [size][sum];

	//inc
	bool inc = false;
	if(sum >= arr[size]){
		//cout<<arr[size]<<" ";
		// cout<<arr[size]<<endl;
		inc = rightToLeft(arr,size-1,sum-arr[size]);
	}

	bool exc = rightToLeft(arr,size-1,sum);

	//exc
	return memo [size][sum] = (inc or exc);
}
bool tabulation(vector<int>&arr,int sum){
	vector<vector<int>> dp(arr.size()+1,vector<int>(sum+1));
	dp[0][0]=1;
	 for(int i =1; i<=arr.size();i++){
	 	dp[i][0]=1;
	 	for(int j = 1; j <= sum;j++){
	 		if(j >= arr[i]){
	 			dp[i][j] = dp[i-1][j] or dp[i-1][j-arr[i]];
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

	//

	return dp[arr.size()][sum];
}

bool tabulationSingleRow(vector<int>&arr,int sum){
	int size = arr.size();
	//output depent upon 2 row only 
	vector<vector<int>> dp(2,vector<int>(sum+1));
	dp[0][0]=1;
	for(int i =1; i<=arr.size();i++){
		
		for(int j = 1; j <= sum;j++){
		}
	}
}

void solve() {
	vector<int> arr = {2,7,4,5,19};
	int sum = 12;
	//cout<<subsetSum(arr,0,sum);
	// cout<<subsetSum(arr,0,sum);
	// cout<<rightToLeft(arr,arr.size()-1,sum)<<endl;
	cout<<tabulation(arr,sum)<<endl;

	// for(auto x:memo){
	// 	for(auto y:x){
	// 		cout<<y<<" ";
	// 	}
	// 	cout<<endl;
	// }


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