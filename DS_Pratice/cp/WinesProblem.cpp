#include <bits/stdc++.h>
using namespace std;

#define endl           "\n"
#define print(a)       for(auto x : a) cout << x << " "; cout << endl;
#define print2(a,x,y)  for(int i = x; i < y; i++) cout<< a[i]<< " "; cout << endl;

int recursive(vector<int> price, int first ,int last ,int year){
	if(first>last){
		return 0;
	}
	if(first == last){
		cout<<"i runed "<<" ";
		cout<<price[last] * year<<endl;
		// return price[last] * year;
	}
	int left = price[first] * year + recursive(price,first+1,last ,year+1);
	int right = price[last] * year + recursive(price,first,last-1 ,year+1);

	/*
		rec relation 
		if we choose left then  l = l+1 and year = y+1 and  price[l]*y
		if we choose right then  r = r-11 and year = y-1 and  price[r]*y
	*/

	return max(left,right);

}


void solve() {
	vector<int> winePrice = { 2, 4, 6, 2, 5 };
	
	cout<<recursive(winePrice,0,winePrice.size()-1,1);


}

int32_t main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	clock_t z = clock();
	int t = 1;
	// cin >> t;
	while (t--) solve();
	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);
	return 0;
}