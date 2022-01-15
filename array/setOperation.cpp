#include<bits/stdc++.h>
using namespace std;
void difference (int *arr,int *arr2){
    int arr3[10];
    int i=0,j=0,n=5,k=0;
    
    while(i<n&&j<n)        
    {
        if(arr[i]==arr2[j]){
            i++;
            j++;
        }
        else if(arr[i]<arr2[j]){
            arr3[k++]=arr[i++];
        }else j++;

        
    }
    for(;i<n;i++){
            arr3[k++]=arr[i];
    }

     for(int element:arr3){
        cout<<element<<" ";
    }







}



void intersection (int *arr,int *arr2){
    int arr3[10];
    int i=0,j=0,n=5,k=0;
    
    while(i<n&&j<n)        
    {
        if(arr[i]==arr2[j]){
            arr3[k++]=arr[i++];
            j++;
        }
        
        else if(arr[i]<arr2[j]){
            i++;
        }else j++;
        
        
    }
        /* for(;i<n;i++){
            arr3[k++]=arr[i];
        }
        
        for(;j<n;j++){
            arr3[k++]=arr2[j];
        } */

    for(int element:arr3){
        cout<<element<<" ";
    }


}
void unioon(int *arr,int *arr2){
    int arr3[10];
    int i=0,j=0,n=5,k=0;

    while(i<n&&j<n)        
    {
        if(arr[i]==arr2[j]){
            arr3[k++]=arr[i++];
            j++;
        }
        else if(arr[i]<arr2[j]){
            arr3[k++]=arr[i++];
        }else arr3[k++]=arr2[j++];

        
    }
        for(;i<n;i++){
            arr3[k++]=arr[i];
        }
        
        for(;j<n;j++){
            arr3[k++]=arr2[j];
        }


    for(int element:arr3){
        cout<<element<<" ";
    }
    
}
int main(){

    int arr[]{1,2,3,4,5};
    int arr2[]{3,4,5,6,7};
    
    unioon(arr,arr2);

    cout<<endl;
    intersection(arr,arr2);
    cout<<endl;
    difference(arr,arr2);


    

}