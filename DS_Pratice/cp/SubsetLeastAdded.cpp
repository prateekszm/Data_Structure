#include<bits/stdc++.h>
using namespace std;
void solve(vector<int> nums, int index, vector<int> output, vector<vector<int>> &ans){
    //base case
    if(index >= nums.size()){
        ans.push_back(output); 
        return;
    }
    // excluding
    solve(nums,index+1,output,ans);
    int element = nums[index];
    output.push_back(element); //pushed the element at nth postion to output
    solve(nums,index+1,output,ans); //including
}

int main(){
	vector<int> nums = {1,2,3,4};
	vector<vector<int>> ans;
	int index =0;
	vector<int> output;

	solve (nums, index , output , ans);

	//printing the subsets
	for(auto arr:ans){
		for(int element :arr){
			cout<< element <<",";
		}
		cout<<endl;
	}

}