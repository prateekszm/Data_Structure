#include <bits/stdc++.h>
using namespace std;

#define int 		long long int
#define F 			first
#define S 			second
#define pb 			push_back
#define vi 			vector<int>
#define endl 		"\n"
#define	print(a)	for(auto x : a) cout<< x <<" "; cout<<endl;

vector<vector<int>> triplets(vi arr,int targetsum){
	vector<vector<int>> result;
	int n=arr.size();
	//sort
	sort(arr.begin(),arr.end());  //nlogn

	//start your first loop
	for(int i=0;i<=n-3;i++){
		int j=i+1;
		int k=n-1;
		while(j<k){
			int currsum=arr[i];
			currsum+=arr[j];
			currsum+=arr[k];		//add to the sum
			if(currsum==targetsum){
				result.pb({arr[i],arr[j],arr[k]});  //pushback in result
				j++;
				k--;
			}else if(currsum>targetsum){
				k--;
			}else{
				j++;
			}
		}
	}

	return result;


}



void solve(){
	vi arr={1,2,3,4,5,6,7,8,9,15};
	int S=18;
	auto result=triplets(arr,S);

	for(auto x:result){
		for(auto c:x){
			cout<<c<<" ";
		}
		cout<<endl;
	}

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












