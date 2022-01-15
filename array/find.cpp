#include <bits/stdc++.h>
using namespace std;

#define int 		long long int
#define F 			first
#define S 			second
#define pb 			push_back
#define vi 			vector<int>
#define endl 		"\n"
#define	print(a)	for(auto x : a) cout<< x <<" "; cout<<endl;


void solve(){
	string str="STL is a powerful learning tools. STL is quiet easy to learn and STL is op";
	string tofind="STL";
	int count=0;
	int index=0;
	/*index=str.find(tofind);
	if(index!=-1){
		count++;
		cout<<index<<endl;
	}
	index=str.find(tofind,index+1);
	if(index!=-1){
		count++;
		cout<<index<<endl;
	}
	index=str.find(tofind,index+1);
	if(index!=-1){
		count++;
		cout<<index<<endl;
	}
	index=str.find(tofind,index+1);
	if(index!=-1){
		count++;
		cout<<index<<endl;
	}

	cout<<count<<endl;
*/
	while(str.find(tofind,index)!=-1){
		count++;
		index=index+1;
	}
	cout<<count;

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
