#include <bits/stdc++.h>
using namespace std;

// #define int 		long long int
#define F 			first
#define S 			second
#define pb 			push_back
#define vi 			vector<int>
#define endl 		"\n"
#define	print(a)	for(auto x : a) cout<< x <<" "; cout<<endl;
string toBinary(int i){
	string str = "";
	while(i>0){
		str.pb(i%2+48);
		i/=2;
	}
	reverse(str.begin(),str.end());
	return str;
}
int verycool(int num,int k){
	for(int i = 1 ;i <= num ; i++){
		string s = toBinary(i);
		// string s="1010";
		// cout<<" "<<s;
		if(s.size()>=3){
			for(int i = 0 ;i < s.size()-3; i++){
				cout<<" "<<s.substr(i,3)<<" ";
			}
			cout<<endl;
		}


	}
	return 0;
}
/*int verycool(int num, int k){
	int cool=0;
	int veryCool=0;
	string toMatch="101";
	for(int i = 1 ;i < num; i++){
		string binary=toBinary(i);
		cout<<binary<<endl;
		if(binary.size()>=3){
		for(int j = 0 ; j <= binary.size() - 2; j++ ){
			// cout<<binary.substr(j,3)<<" "<< i;
			if(binary.substr(j,3) == toMatch){
				cool++;
			}
			if(cool>k){
				veryCool++;
			}
		}
		cout<<endl;
	}
}
	return veryCool;
}*/

void solve(){
	int n=49;
	cout<<verycool(n,6);

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
