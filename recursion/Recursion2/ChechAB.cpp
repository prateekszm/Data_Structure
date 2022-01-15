#include<bits/stdc++.h>
using namespace std;
bool checkAB(string s){
	if(s.size()==0){
		return true;
	}
	if(s[0]=='a'){
		if((s.substr(1).size()>1) && (s.substr(1,3)=="bb")){
			return checkAB(s.substr(3));
		}else{
			return checkAB(s.substr(1));
		}

	}else{
		return false;
	}

	return false;



}



int main(){
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	string s;
	cin>>s;
	bool tf=checkAB(s);
	cout<<tf;


}