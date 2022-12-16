#include <bits/stdc++.h>
using namespace std;
#define print(a)       for(auto x : a) cout << x << " "; cout << endl
#define print1(a)      for(auto x : a) cout << x.F << " " << x.S << endl

void multiply(vector<int>&a,int no,int &size){
	int carry = 0;
	for(int i = 0;i<size;i++){
		int product = a[i]*no + carry;
		a[i] = product % 10;
		carry = product/10;
	}
	while(carry){
		a[size++] = carry%10;
		carry = carry/10;
	}
}

int main(){
	vector<int> a(1000,0);
	int n;
	cin>>n;
	int size = 1;
	a[0]=1;
	for(int i =2; i<=n;i++){
		multiply(a,i,size);
	}

	//print the vector
	for(int i = size-1; i>= 0 ; i--){
		cout<<a[i];
	}

}