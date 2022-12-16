#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int>mainArr{5,1,22,4,5,6,-1,6,3,8,0,4,5,6};
	vector<int>subArr{1,-1,6,3,8,0};

	int subArrPtr = 0;
	for(int i = 0 ;i < mainArr.size() ;i++){
		if(mainArr[i] == subArr[subArrPtr]){
			subArrPtr++;
		}

	}
	if(subArrPtr != subArr.size()){
		cout<<"Not Matched";
	}else{
		cout<<"Matched";
	}
}