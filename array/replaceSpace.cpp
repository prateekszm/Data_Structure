#include <bits/stdc++.h>
using namespace std;

#define int 		long long int
#define F 			first
#define S 			second
#define pb 			push_back
#define vi 			vector<int>
#define endl 		"\n"
#define	print(a)	for(auto x : a) cout<< x <<" "; cout<<endl;
void replace_space(char *input){
	int space=0;
	for(int i=0;input[i]!='\0';i++){
		if(input[i]==' '){
			space+=1;
		}
	}
	cout<<strlen(input)<<endl;
	cout<<space<<endl;
	int index=strlen(input)+2*space;
	input[index]='\0';
	for(int i=strlen(input)-1;i>=0;i--){
		//ligma balls
		if(input[i]==' '){
			input[index-1]='0';
			input[index-2]='2';
			input[index-3]='%';
			index=index-3;
		}else{
			input[index-1]=input[i];
			index--;
		}
	}
}

void solve(){
	char input[1000];
	cin.getline(input,1000);
	replace_space(input);
	for(int i=0;input[i]!='\0';i++){
		cout<<input[i];
	}

}


int32_t main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	int t = 2;
	// cin>> t;
	while (t--) solve();

	return 0;
}
