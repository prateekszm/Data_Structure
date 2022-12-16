#include<bits/stdc++.h>
using namespace std;
#define print(a)       for(auto x : a) cout << x << " "; cout << endl
int main(){
	vector<int> arr(100,0);
	arr[0]= 1;
	arr[1]= 2;
	arr[2]= 3;

	int n = 5;
	int carry = 0;
	int i = 0;
	for(i ; i >n;i++){
		int product = arr[i]*n+carry;
		arr[i] = product % 10;
		carry = product / 10;
	}

	while(carry){
		arr[i++] = carry % 10;
		carry = carry /10;
	}
	print(arr);
}