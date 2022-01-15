#include <bits/stdc++.h>
using namespace std;

#define int 		long long int
#define F 			first
#define S 			second
#define pb 			push_back
#define vi 			vector<int>
#define endl 		"\n"
#define	print(a)	for(auto x : a) cout<< x <<" "; cout<<endl;

int LongestConsecutiveSequence(vi arr){
	int longest=1;
	int n=arr.size();
	// cout<<n<<endl;
	unordered_set<int> s;
	unordered_set<int> visited;
	//inserting int the set
	for(auto x:arr){
		s.insert(x);
	}
	
	for(auto element:s){
		int parent=element-1;
		if(s.find(parent)==s.end()){
			int next_number=element+1;
			int count=1;
			while(s.find(next_number)!=s.end()){
				count++;
				next_number+=1;
			}

			longest=max(count,longest);
		}

		
	}


	return longest;
}

void solve(){
	vi arr={1,9,3,0,18,5,2,4,10,7,12,6};
	int total=LongestConsecutiveSequence(arr);
	cout<<total;


}


int32_t main(){
	
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	
	int t = 1;
	// cin>> t;
	while (t--) solve();

	return 0;
}
