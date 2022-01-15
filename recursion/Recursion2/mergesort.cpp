#include<bits/stdc++.h>
using namespace std; 
void mergesort(int[],int,int);
void display(int[],int);
void merge(int[],int,int ,int );

int main(){
    int n;
    cout<<"Enter the n number:";
    cin>>n;
    int arr[n];
    cout<< "Enter elements : "<<endl;
    for(int i=0;i<n;i++){
        arr[i]=rand()%10;
    }
    display(arr,n);
    mergesort(arr,0,n-1);
    cout<<"  "<<endl;
    display(arr,n);


}

void mergesort(int *array,int l,int r){
    if(l<r){
        int mid=l+(r-l)/2;
        mergesort(array,l,mid);
        mergesort(array,mid+1,r);
        merge(array,l,mid,r);
    }
}

void merge(int *array,int left,int mid,int right){
    int i,j,k,nl,nr;
    nl=mid-left+1; nr=right-mid;
    int larr[nl],rarr[nr];
    for(i=0;i<nl;i++){
        larr[i]=array[left+i];
        
    }
    for(j=0;j<nr;j++){
        rarr[j]=array[mid+1+j];
    }
    i=0,j=0,k=left;

    while(i<nl&&j<nr){
        if(larr[i]<rarr[j]){
            array[k]=larr[i];
            k++;i++;
        }else{
            array[k]=rarr[j];
            k++;j++;

        }
    }
    for(;i<nl;i++){
        array[k]=larr[i];
        k++;
    }
    for(;j<nr;j++){
        array[k]=rarr[j];
        k++;
    }
}

void display(int *array,int size){
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";

    }
    cout<<endl;
}