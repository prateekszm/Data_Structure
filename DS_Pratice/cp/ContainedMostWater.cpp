#include<bits/stdc++.h>
using namespace std;
#define print(a)       for(auto x : a) cout << x << " "; cout << endl
#define print1(a)      for(auto x : a) cout << x.F << " " << x.S << endl
int main(){
	vector<int> arr ={1,8,6,2,5,4,8,3,7};
	print(arr);
	int left = 0;
	int right = arr.size()-1;
	int maxWater = 0;
	int result = 0;

	while(left < right){
	  maxWater = (right-left) * ((arr[left]<arr[right]) ? arr[left] : arr[right]);
	  cout<<"left "<<arr[left+1]<<" right "<<right+1 <<": "<< maxWater<<endl;
	  result = max(maxWater,result);
	  if(arr[left] < arr[right] ){
	    left++;
	  }else{
	    right--;
	  }
	}
	cout<<result;
}