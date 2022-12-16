#include <bits/stdc++.h>
using namespace std;
int main(){
	string s = "lleettccodes";
	unordered_map<char,int> mp;
	for(char c:s){
	        mp[c]++;
	}
	for(auto pr:mp){
		cout<<pr.first<<":"<<pr.second<<" ";
	}
	cout<<endl;
	int i=0;
	for(char c:s){
		if(mp[c]==1){
			cout<<i;
			break;
		}
		i++;
		
	}

}