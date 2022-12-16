#include <bits/stdc++.h>
using namespace std;

#define int            long long int
#define F              first
#define S              second
#define pb             push_back
#define si             set <int>
#define vi             vector <int>
#define pii            pair <int, int>
#define vpi            vector <pii>
#define vpp            vector <pair<int, pii>>
#define mii            map <int, int>
#define mpi            map <pii, int>
#define spi            set <pii>
#define endl           "\n"
#define sz(x)          ((int) x.size())
#define all(p)         p.begin(), p.end()
#define double         long double
#define que_max        priority_queue <int>
#define que_min        priority_queue <int, vi, greater<int>>
#define bug(...)       __f (#__VA_ARGS__, __VA_ARGS__)
#define print(a)       for(auto x : a) cout << x << " "; cout << endl
#define print1(a)      for(auto x : a) cout << x.F << " " << x.S << endl
#define print2(a,x,y)  for(int i = x; i < y; i++) cout<< a[i]<< " "; cout << endl

inline int power(int a, int b)
{
	int x = 1;
	while (b)
	{
		if (b & 1) x *= a;
		a *= a;
		b >>= 1;
	}
	return x;
}

template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
	const char* comma = strchr (names + 1, ',');
	cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}

const int N = 200005;

void merge(vi arr,int mid,int left,int right){
	int n1 = mid-left+1;
	int n2 = right-mid;
	//copy the array
	 vi leftArr(n1);
	 vi rightArr(n2);

	for(int i = 0 ;i < n1;i++){
		leftArr[i]= arr[left+i];
	}
	for(int i = 0 ;i < n2;i++){
		rightArr[i]= arr[right+i];
	}

	//merge 
	int i = 0;
	int j = 0;
	int k = left;


	while(i < n1 and j < n2){
		if(leftArr[i]<rightArr[j]){
			arr[k++] = leftArr[i++];
		}else{
			arr[k++] = rightArr[j++];
		}
	}

	//adding rest of array
	while(i<n1){
		arr[k++] = leftArr[i++];
	}
	while(j<n2){
		arr[k++] = rightArr[j++];
	}

}

void mergesort(vi arr,left,right){
	if(left >= right){
		return;
	}
	int mid = (left+(right-left))/2;
	mergesort(arr,left,mid);
	mergesort(arr,mid+1,right);
	merge(arr,mid,left,right)

}

void solve() {
	vi arr{1,2,3,4,5,6,62,34,63,26,74,23,6,73,55,25,67,24};
	
	int mid = 0;
	int left = 0;
	int right = arr.size();

	mergesort(arr,left,right);
	print(arr);
}

int32_t main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt",  "r",  stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	clock_t z = clock();

	int t = 1;
	// cin >> t;
	while (t--) solve();

	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

	return 0;
}