#include<bits/stdc++.h>
using namespace std;

string lcs(string a , string b){
	//cout<<a<<" : "<<b <<endl;
	int static count = 0;
	int n = min(a.size(),b.size());
	for( int i = 0 ;i < n ;i++){
		cout<<count<<endl;
		if(a[i] != b[i] ){
			return a.substr(0,i);
		}
	}
	return a.substr(0,n);
}

int main(){
	string str = "bdfehghybdfejaksnks";
	string lrs = "";
	int n = str.size();

	for(int i = 0; i < str.size();i++){
		for(int j = i+1; j < str.size(); j++){
			string matching = lcs(str.substr(i,n),str.substr(j,n));
			if(matching.size()>lrs.size()){
				lrs = matching;
			}
		}

	}
	cout<<lrs;
}