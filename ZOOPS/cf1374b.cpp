#include <bits/stdc++.h>
using namespace std;

#define int 		long long int
#define F 			first
#define S 			second
#define pb 			push_back
#define vi 			vector<int>
#define endl 		"\n"
#define	print(a)	for(auto x : a) cout<< x <<" "; cout<<endl;


void solve() {
	int n;
	cin >> n;
	int count = 0;
	while (n % 6 == 0) {
		n = n / 6;
		count++;
	}
	while (n % 3 == 0) {
		n = n / 3;
		count = count + 2;
	}
	if (n == 1) {
		cout << count << endl;
	} else {
		cout << -1 << endl;
	}

}


int32_t main() {
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	clock_t z = clock();
	int t = 1;
	cin >> t;
	while (t--) solve();
	// cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);


	return 0;
}
