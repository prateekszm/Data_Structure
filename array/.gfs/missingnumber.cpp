#include<bits/stdc++.h>
int main(){
    int arr[]{1,2,3,4,5,7,8,9};
    int hash[9+1];
    memset(hash,0,sizeof(hash));

    for(int i=0;i<9-1;i++){
        hash[arr[i]]++;
    }
    // memset(hash,0,sizeof(hash));
    for(int i=1;i<10;i++){
        if(hash[i]==0){
            std::cout<<i<<" ";
        }
    }
}