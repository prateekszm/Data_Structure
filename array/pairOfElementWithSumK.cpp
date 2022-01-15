#include<iostream>
using namespace std;
int main(){
    int arr[]{6,3,8,10,16,7,5,2,9,14};
    int hash[17];
    for (int i = 0; i < 17; i++)
    {
        hash[i]=0;
    }
    int k=10;

    for(int i=0;i<10;i++){
        if(hash[(k-arr[i])]!=0&&k-arr[i]>=0){
            cout<<arr[i]<<" + "<< k-arr[i]<<" = 10"<<endl;
        }
        hash[arr[i]]++;
    }
    
}