/* Find the single missing element from array */
#include<iostream>
using namespace std;
int main(){
    int arr[]{1,2,3,5,6,7};
    int sum=0;
    for(int i=0;i<6;i++){
        sum=sum+arr[i];
    }
    int n=7*(7+1);
    n=n/2;
    cout<<n-sum<<endl;
    /* if its start from 7 to 14 */
    int arr2[]{7,8,9,11,12,13,14};
    int low=7,high=14,size=7;
    int diff=low-0;
    for(int i=0;i<size;i++){
        if((arr2[i]-i)!= diff){
            cout<<i+diff;
            break;
        }
    }
}