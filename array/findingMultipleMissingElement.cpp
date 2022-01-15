#include<iostream>
using namespace std;
void withTheHelpOfHash(int *arr,int length){
    int arr2[17];
    for(int i=0;i<18;i++){
        arr2[i]=0;
    }
    int index;
    for(int i=0;i<length;i++){
        arr2[arr[i]]++;
    }
    cout<<endl;
    for(int i=4;i<18;i++){
        if(arr2[i]==0){
            cout<<i<<" ";
        }
    }
}
int main(){
    int arr[]{4,5,6,7,9,10,11,12,13,16,17};
    int length=11;
    int low=arr[0];
    int high=arr[length-1];
    int diff=low-0;

    for(int i=0;i<length;i++){
        if((arr[i]-i)!=diff){
            //  cout<<low+i<<" ";
            //  diff++;
            while (diff<arr[i]-i)   
            {
                cout<<i+diff<<" ";
                diff++;
            }
            
        }
    }

    //ans =8,14,15

    withTheHelpOfHash(arr,length);
}