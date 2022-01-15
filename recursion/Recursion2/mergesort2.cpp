#include<iostream>
#define  MS meargesort
#define M merge
using namespace std;

void M(int *arr,int l,int mid,int r){
    int ln=mid-l+1;
    int rn=r-mid;
    int larr[ln];
    int rarr[rn];
    int i;int j;int k;
    for(i=0;i<ln;i++){
        larr[i]=arr[l+i];
    }
    for(j=0;j<rn;j++){
        rarr[j]=arr[mid+1+j];
    }
    /* Now Only Merging */
    i=0;j=0;k=l;
    while(i<ln&&j<rn){
        if(larr[i]<=rarr[j]){
            arr[k]=larr[i];
            i++;k++;
        }else{
            arr[k]=rarr[j];
            j++;k++;
        }
    }
    for(;i<ln;i++){
        arr[k]=larr[i];
        k++;
    }
    for(;j<rn;j++){
        arr[k]=rarr[j];
        k++;
    }
}


void MS(int *arr,int l,int r){
    if(l<r){
        int mid=(l+r)/2;
        MS(arr,l,mid);
        MS(arr,mid+1,r);
        M(arr,l,mid,r);
    }
}

int main(){
    int n;
    cout<<"Enter the no of emlements "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i]=rand()%10;
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    MS(arr,0,n-1);

    cout<<"The sorted array is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


}