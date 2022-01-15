#include<iostream>
using namespace std;
int findindices(int[],int,int,int*);
int main(){
    int arr[]={9,8,10,8,8};
    int x=8;
    int *output=new int(5);
    int sum= findindices(arr,5,x,output);
    cout<<sum<<endl;

    for(int i=0;i<sum;i++){
        cout<<output[i]<<" ";
    }
}

int findindices(int arr[],int size,int x,int fsf[]){
    //base case
    if(size==0){
        return 0;
    }
   int ans= findindices(arr,size-1,x,fsf);
   if(arr[size-1]==x){       //[9,8,10,8,8]
       fsf[ans]=size-1;
       return ans+1;
   }
   return ans;
}

int fun(int input[], int size,int x,int output[]){
    if(size==0){
        return 0;
    }
    int ans=fun(input,size-1,x,output);
    if(input[size-1]==x){
        output[ans]=size;
        //ans+1;
        return ans+1;
    }

    return ans;


}