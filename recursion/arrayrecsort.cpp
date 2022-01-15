#include<iostream>
using namespace std;

bool is_sorted2(int arr[],int size){
    if(size==0||size==1){
        return true;
    }
    bool sop=is_sorted2(arr+1,size-1);
    if(!sop){
        return false;
    }
    if(arr[0]>arr[1]){
        return false;
    }else{
        return true;
    }
}

bool is_sorted(int arr[],int size){
    if(size==0||size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    bool is=is_sorted(arr+1,size-1);
    return is;  //if its true its will return true
    // if(is){
    //     return true;
    // }else{
    //     return false;
    // }
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    cout<<is_sorted(arr,10);
}