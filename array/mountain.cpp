#include <bits/stdc++.h>
using namespace std;

#define int 		long long int
#define F 			first
#define S 			second
#define pb 			push_back
#define vi 			vector<int>
#define endl 		"\n"
#define	print(a)	for(auto x : a) cout<< x <<" "; cout<<endl;


	int longestMountain(vector<int>& arr) {
	        int longest=0;
	        int n=arr.size();
	        for(int i=1;i<=n-2;){
	            if(arr[i]>arr[i-1] and arr[i]>arr[i+1]){
	                int count=1;
	                int j=i; //j for going back till found any increasing order
	                //peak found
	                //go to left and do some work
	                while(j>=1 and arr[j-1]<arr[j]){
	                    j--;
	                    count++;
	                }
	                //go to right and do some work
	                while(i<=n-2 and arr[i]>arr[i+1]){
	                    i++;
	                    count++;
	                }
	                longest=max(longest,count);
	            }else{
	                i++;
	            }
	        }
	        return longest;
	    }


void solve(){
	vi l={0,1,0};
	cout<<longestMountain(l);	

}


int32_t main(){
	/*#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif*/
	int t = 1;
	// cin>> t;
	while (t--) solve();

	return 0;
}
