#include <bits/stdc++.h>
using namespace std;

#define int 		long long int
#define F 			first
#define S 			second
#define pb 			push_back
#define vi 			vector<int>
#define endl 		"\n"
#define	print(a)	for(auto x : a) cout<< x <<" "; cout<<endl;
string uniqueSubstr(string s){
	int n=s.length();
	char ch;
	int start_Window=-1;
	int cs=0;
	int ms=0;
	int i=0,j=0;
	unordered_map<char,int> um;
	while(j<n){
		ch=s[j];
		//if element is in window
		if(um.count(ch) and um[ch]>=i){
			//it lies in window
			i=um[ch]+1;
			cs=j-i;
		}
		um[ch]=j;
		cs++;
		j++;

		//update max window 
		if(cs>ms){
			ms=cs;
			start_Window=i;
		}

	}
	return s.substr(start_Window,ms);
}

void solve(){
	string str="Hello!prateekhowareyou";
	cout<<uniqueSubstr(str);
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
