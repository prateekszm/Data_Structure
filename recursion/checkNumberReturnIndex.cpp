#include<iostream>
using namespace std;
int checkNumber(int [],int,int,int);
int checkNumber2(int [],int ,int);
int checkNumberlast(int [],int ,int);
int main(){
    int n;
    cout<<"Enter the n :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i]=rand()%21;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int l=0;
    // int present=checkNumber(arr,n,9,l);
    int present=checkNumber2(arr,n,9);
    // int present=checkNumberlast(arr,n,9);
    cout<<present<<endl;
    cout<<arr[present];
    

   
}

int checkNumber(int arr[],int size,int tocheck,int l){


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
            return l;
    }

    return checkNumber(arr,size,tocheck,l+1);


}

int checkNumber2(int arr[],int size ,int x){
    if(size==0){
        return -1;
    }
    if(arr[0]==x){
        return 0;
    }
    return checkNumber2(arr+1,size-1,x)+1;

}

// int checkNumberlast(int arr[],int size ,int x){
//     //base case
//     if(size==0){
//         return -1;
//     }


//     int ans = checkNumberlast(arr+1,size-1,x)+1;
//     if(arr[0]==x){
//         return ans;
//     }
//     if(ans==-1){
//         // arr[0]==x;
//         return 0;
//     }else{
//         return 1;

//     }


// }

