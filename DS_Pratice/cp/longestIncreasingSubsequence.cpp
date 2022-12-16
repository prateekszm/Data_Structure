#include<bits/stdc++.h>
using namespace std;
#define print(a) 	for(auto x : a) cout<< x <<" "; cout<<endl;
int main(){
	vector<int> arr = {10,9,2,5,3,7,101,18};
	print(arr);
	vector<int>dp(arr.size(),0);
	int maximum = INT_MIN;
	dp[0] = 1;
	for(int i = 1; i < arr.size(); i++){
		int max = 0;
		for(int j = 0; j < i; j++){
			if(arr[i]>arr[j]){
				if(max < dp[j]){
					max = dp[j];
				}
			}
			dp[i] = max + 1;
		}
	}
	for(auto x:dp){
		if(x > maximum)
			maximum = x;
	}
	print(dp);
	cout<<maximum<<endl;
}