#include<bits/stdc++.h>
using namespace std;
#define print(a) 	for(auto x : a) cout<< x <<" "; cout<<endl;
int byRecursion(vector<int> &coin,int amount){
	//base Case
	if(amount == 0)
		return 0;

	int minimum = INT_MAX;

	for(int i = 0;i<coin.size();i++){
		if(coin[i] <= amount){
			int count = byRecursion(coin,amount - coin[i]);
			// cout<<"I runed "<<count << "minimum "  <<minimum;
			if(count != INT_MAX  and minimum > count+1){
				minimum = count+1;
			}
		}
	}
	if(minimum != INT_MAX){
		return minimum;
	}else{
		return -1;
	}
}
	

int main(){
	vector<int>coin={1,3,7,10};
	int amount = 15;
	vector<int> dp(coin.size(),0);

	int count =  byRecursion(coin,amount);
	cout<<endl;
	cout<<count;
	cout<<endl;


	int a = 0;
	cout<<a++ << " ";
	cout<<++a << " ";
	cout<<a+1 << " ";

}
