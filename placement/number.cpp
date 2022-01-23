#include <bits/stdc++.h>
using namespace std;

#define int 		long long int
#define F 			first
#define S 			second
#define pb 			push_back
#define vi 			vector<int>
#define endl 		"\n"
#define	print(a)	for(auto x : a) cout<< x <<" "; cout<<endl;
void dfs(int num, int i, vi &jmpingNumbers) {
	queue<int> q;
	q.push(i);

	while (!q.empty()) {
		i = q.front();
		q.pop();

		if (i <= num) {
			jmpingNumbers.pb(i);
			int last_dig = i % 10;
			if (last_dig == 0)
				q.push((i * 10) + (last_dig + 1));
			else if (last_dig == 9)
				q.push((i * 10) + (last_dig - 1));
			else {
				q.push((i * 10) + (last_dig - 1));
				q.push((i * 10) + (last_dig + 1));
			}
		}
	}
}

void solve() {
	int num;
	cin >> num;
	vi jmpingNumbers;
	jmpingNumbers.pb(0);
	for (int i = 1; i <= 9 and  i <= num ; i++) {
		dfs(num, i , jmpingNumbers);
	}
	sort(jmpingNumbers.begin(), jmpingNumbers.end());
	for (auto x : jmpingNumbers) {
		cout << x << " ";
	}

}


int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	clock_t z = clock();
	int t = 1;
	cin >> t;
	while (t--) solve();
	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);


	return 0;
}
