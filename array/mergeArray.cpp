#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr1[]{1,3,5,7,9,11};
    int arr2[]{2,4,6,8,10,12};
    int i=0,j=0,k=0;
    int arr1len=sizeof(arr1)/sizeof(arr1[0]);
    int arr2len=sizeof(arr2)/sizeof(arr2[0]);
    int arr3[arr1len+arr2len];
    while(i<arr1len&&j<arr2len){
        if(arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++];
        }else arr3[k++]=arr2[j++];
    }
    for(;i<arr1len;i++){
        arr3[k++]=arr1[i];
    }
    for(;j<arr2len;j++){
        arr3[k++]=arr2[j];
    }
    for(int element:arr3){
        cout<<element<<" ";
    }

    /* Time complexity = order of n+m */
}