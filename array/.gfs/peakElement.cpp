#include<bits/stdc++.h>
using namespace std;
int peakelementbyBinarySearch(int *arr,int low,int high){
    while (low<=high)        
    {
        int mid=(low+high)/2;
        if((mid==0||arr[mid]>=arr[mid-1])&&(mid==6||arr[mid]>=arr[mid+1])){
            // cout<< arr[mid]<<" ";
            return arr[mid];
            // break;
        }else if(mid>0&&arr[mid-1]>arr[mid]){
            high=mid-1;
        }else low=mid+1;

    }
    
}
int main(){
    int array[]{10,20,15,2,23,90,67};
    for(int i=1;i<7-1;i++){
        if(array[6]>array[5]){
            cout<<array[3];
        }
        if(array[0]>array[1]){
            cout<<array[0];
        }

        if(array[i]>=array[i-1]&&array[i]>=array[i+1]){
            cout<<array[i];
        }
    }

    int x= peakelementbyBinarySearch(array,0,6);
    cout<<endl<<x;
}