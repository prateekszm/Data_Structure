#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]{1,2,3,4,5,6,7,8,9,10};
    int arr2[10];
    for(int i=9,j=0;i>=0;i--,j++){
        arr2[j]=arr[i];
    }
    for(int ele:arr2){
        cout<<ele<<" ";
    }
    int temp=0;
    for(int i=9,j=0;i<j;i--,j++){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    cout<<endl;
    for(int ele:arr2){
        cout<<ele<<" ";
    }

    /* left shift right sift and rotation
        arr={1,2,3,4,5}
        after leftshift
        arr={2,3,4,5,0}
        after rotation
        arr={2,3,4,5,1}

        lets perform left shift rotation and print the value
     */

    cout<<endl;
    int a[]={1,2,3,4,5};
    int tempe= a[0];
    //cout<<endl<<tempe;
    for(int i=1;i<5;i++){
        a[i-1]=a[i];
    }
    a[4]=tempe;
    for(int element:a){
        cout<<element<<" ";
    }
    cout<<endl;

}