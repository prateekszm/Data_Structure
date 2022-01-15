#include<iostream>
#include<vector>
using namespace std;
void subarr(vector<int> arr,int start,int end){
    if(end==arr.size()){
        return;
    }
    else if(start>end){
        subarr(arr,0,end+1);
    }
    else{
        cout<<"[";
        for(int i=start;i<end;i++){
            cout<<arr[i]<<",";
        }
        cout<<arr[end]<<"]"<<endl;
        subarr(arr,start+1,end);
    }
}
int main(){
    vector<int> arr={10,20,30};
    int len=3;
    subarr(arr,0,0);

}