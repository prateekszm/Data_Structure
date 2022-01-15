#include<iostream>
using namespace std;
void byRecursiveCall(int *arr,int length){
    if(length==0){
        return;
    }
    if(arr[length-1]==arr[length-2]){
        cout<<arr[length-1]<<" ";
    }
    return byRecursiveCall( arr,length-1);

}
void dubelementunsorted(){
    int arr[15]{2 ,35,2,36,2,45,65,34,53,35,36,9,9,9,9};
    cout<<endl;
    for(int i=0;i<14;i++){
        int count=1;
        if(arr[i]==-1){

            for(int j=i+1;j<15;j++){
                if(arr[i]==arr[j]){
                    count ++;
                    arr[j]=-1;

                }

            }
            cout<<"The number"<<arr[i]<<"The cpunt "<<count;
            cout<<endl;
        }
    }
}
int main(){
    int arr[13]{1,2,3,3,4,5,6,6,6,7,8,9,10};
    int length=13;
    for(int i=0;i<length;i++){
        if(arr[i]==arr[i+1]){
            std::cout<<arr[i]<<" ";
        }
    }
    int arr2[11];

    for(int i=0;i<11;i++){
        arr2[i]=0;
    }
    for(int i=0;i<11;i++){
        arr2[arr[i]]++;
    }
    cout<<endl;
    for(int i=0;i<11;i++){
        if(arr2[i]>1){
            cout<<i <<" count: "<<arr2[i];
            cout<<endl;
        }
    }

    // byRecursiveCall(arr,length);
    // dubelementunsorted();

    int arr4[15]{2,35,2,36,2,45,65,34,53,35,36,9,9,9,9};
    cout<<endl;
    for(int i=0;i<14;i++){
        int count=1;
        if(arr4[i]!=-1){

            for(int j=i+1;j<15;j++){
                if(arr4[i]==arr4[j]){
                    count ++;
                    arr4[j]=-1;

                }

            }
            if(count>1) cout<<"The number"<<arr4[i]<<"The cpunt "<<count;
            cout<<endl;
        }
    }
}