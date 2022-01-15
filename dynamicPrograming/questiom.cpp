#include <bits/stdc++.h>
using namespace std;


int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	int n;
	cin>>n;
	vector<string> basket;

	for(int i=0;i<n;i++){
		string fruit;
		cin>>fruit;
		basket.push_back(fruit);
	}

	int gauva=0,apple=0,banana=0;

	for(auto x:basket){
		if(x=="green"){
			gauva++;
		}else if(x=="red"){
			apple++;
		}else{
			banana++;
		}
	}


	// cout<<banana<<" "<<apple<<" "<<gauva;

	if(apple>banana and apple>gauva){
		cout<<"apple";
	}else if(banana>apple and banana>gauva){
		cout<<"banana";
	}else if(gauva>apple and banana<gauva){
		cout<<"gauva";
	}
	else{
		if(apple==banana or apple==gauva or gauva==banana){
			cout<<"none";
		}
	}
	


}
