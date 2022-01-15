#include<iostream>
using namespace std;
int lastIndex(int[],int,int);
int main(){
    int n=10;

    int arr[10]={1,2,3,4,5,6,5,4,3,2};
    int index=lastIndex(arr,n,4);
    cout<<index;


}

int lastIndex(int arr[],int size,int x){
    if(size==0){
        return -1;
    }
    // if(size==1){
    //     if(arr[0]==x){
    //         return 0;
    //     }else
    //     return -1;
    // }
    
    int ans=lastIndex(arr+1,size-1,x);
    if(ans==-1){
        if(arr[0]==x)
            return 0;
        else
            return -1;
    }else{
        return ans+1;
    }

    
    

}