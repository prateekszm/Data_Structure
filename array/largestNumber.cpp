#include <bits/stdc++.h>
using namespace std;

#define int 		long long int
#define F 			first
#define S 			second
#define pb 			push_back
#define vi 			vector<int>
#define endl 		"\n"
#define	print(a)	for(auto x : a) cout<< x <<" "; cout<<endl;
bool comparator(string a,string b){
	return a+b > b+a;
}

void solve(){
	vector<int> nums={0,0,0,0,0};
	vector<string> str;
	int count=0;
	for(auto x:nums){
		count++;
		str.pb(to_string(x));
	}
	
	sort(str.begin(),str.end(),comparator);
	for(auto sh:str){
		cout<<sh<<" ";
	}
	string s="";
	for(auto sh:str){
		s+=sh;
	}
	if (count==nums.size())
	{
		cout<<"zero"<<endl;
	}else
		cout<<s<<endl;

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
