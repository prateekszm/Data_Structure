#include<bits/stdc++.h>
using namespace std;
int main(){
	string str1 = "longest"; //row full be
	string str2 = "stone"; //col full
	// cout<<str1.size();
	vector<vector<int>>dp(str2.size()+1,vector<int> (str1.size()+1));
	int row = str2.size();
	int col = str1.size();

	//cout<<row << col <<endl;

	for(int i = 1; i <= row ;i++){
		for(int j = 1; j <= col; j++){
			if(str2[i-1] == str1[j-1]){
				dp[i][j]= 1 + dp[i-1][j-1];
			}else{
				
				dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
			}
			//cout<<str2[i];
			cout<<dp[i][j-1]<<dp[i-1][j]<<" "<<str2[i-1]<<str1[j-1] <<"   " << i << " "<<j<<"|" ;
		}
		cout<<endl;
	}
	
	
	cout<<"  l o n g e s t"<<endl;
	for(auto x: dp){
		for(auto a :x){
			cout<<a<<" ";
		}
		cout<<endl;
	}

	//back tracing : 
	for(int i = 0; i < dp.size();i++)
}