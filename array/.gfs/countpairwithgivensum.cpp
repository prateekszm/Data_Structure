#include<bits/stdc++.h>
int main(){
    int arr[] = {1, 5, 7, -1};
    int size=4;
    int sume=6;
    int low=0,hight=0;
    int sum=0;
    int count=0;
    while(low<size and hight<size){
        if(sume>sum){
            sum=arr[low]+sum;
            low++;
        }else if(sume<sum){
            sum=sum-arr[hight];
            hight++;
        }else{
            count++;
            low++;
            hight++;
        }
    }
    std::cout<<count;

}