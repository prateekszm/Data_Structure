#include<iostream>
using namespace std;
bool checkNumber(int [],int,int,int);
int main(){
    int n;
    cout<<"Enter the n :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i]=rand()%11;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int l=0;
    bool present=checkNumber(arr,n,18,l);
    if(present){
        cout<<"Present";
    }else
    cout<<"Not present";

   
}

bool checkNumber(int arr[],int size,int tocheck,int l){


    if(size<=l){
        return 0;
    }
    /*      
            if(size==0){
                return 0;
            }
            return arr[size-1]+arr[size-1];
    
    
     */

    if(tocheck==arr[l]){
            return true;
    }

    return checkNumber(arr,size,tocheck,l+1);


}


