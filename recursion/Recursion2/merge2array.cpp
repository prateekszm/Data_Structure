#include <iostream>
using namespace std;
void merge(int[],int,int[],int,int[]);

int main()
{
    int arr1[]={1,2,4,5,7};
    int arr2[]={9,10,12,14,18};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    
    int result[n1+n2];
    
    merge(arr1,n1,arr2,n2,result);
    
    for(int i=0;i<(n1+n2);i++){
        cout<<result[i]<< " ";
    }

    return 0;
}

void merge(int arr1[],int n1,int arr2[],int n2,int result[]){
    int i=0,j=0,k=0;
    while(i<n1&&j<n2){
        if(arr1[i]<arr2[j]){
            result[k]=arr1[i];
            k++;i++;
        }else{
            result[k]=arr2[j];
            k++;j++;
        }
    }
    for(;i<n1;i++){
        result[k]=arr1[i];
        k++;
    }
    for(;j<n2;j++){
        result[k]=arr2[j];
        k++;
    }
    
}
