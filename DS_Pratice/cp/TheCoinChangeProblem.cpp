#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int>coin = {10};
	int amount = 10;
	long count = 0;
	sort(coin.begin(),coin.end());
	vector<long> dp(amount+1,0);
	dp[0] = 1;
	
	for(int i = 0; i < coin.size(); i++ ){
	    for(int j = coin[i] ; j < amount+1; j++){
	    	cout<<dp[j - coin[i]]<<" | " <<dp[j]<<endl;
	        dp[j] = dp[j] + dp[j - coin[i]];
	    }
	}
	for(auto x: dp){
	    cout<<x<<" ";
	}
	cout<<endl<<dp[amount];
	return 0;
}