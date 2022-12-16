#include <bits/stdc++.h>
using namespace std;
#define print(a)       for(auto x : a) cout << x << " "; cout << endl
#define print1(a)      for(auto x : a) cout << x.F << " " << x.S << endl

int charToInt(char a){
	return a- '0';
}

char intToChar(int a){
	return a+ '0';
}


string addBigInteger(string a,string b){
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());

	string result = "";
	if(a.length()>b.length()){
		swap(a,b);
	}
	int carry = 0;
	for(int i = 0;i<a.size();i++){
		int sum = charToInt(a[i])+ charToInt(b[i]) + carry;
		int output = sum%10;
		carry = sum/10;
		result.push_back(intToChar(output));
	}
	for(int i = a.size();i<b.size();i++){
		int sum = carry + charToInt(b[i]);
		int output = sum%10;
		carry = sum/10;
		result.push_back(intToChar(output));
	}
	if(carry){
		result.push_back('1');
	}

	reverse(result.begin(),result.end());
	return result;
}
int main(){
	string a,b;
	cin>>a>>b;
	cout<<addBigInteger(a,b);

	
}