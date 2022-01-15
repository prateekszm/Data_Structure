#include<iostream>
using namespace std;
int main(){
    int arr[]{1, 6,3,8,10,16,7,5,2,9,14};
    int min=arr[0],max=arr[0];
    for(int i=0;i<10;i++){
        if(arr[i]>max) max=arr[i];
        else if(arr[i]<min) min=arr[i];
        else cout<<"ligma balls"<<endl;
    }
    cout<<min<<"  "<<max;
}