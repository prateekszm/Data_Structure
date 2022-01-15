#include<iostream>
using namespace std;
void deleteAtIndex(int arr[],int position,int &length){
    for(int i=position;i<length;i++){
        arr[i]=arr[i+1];
    }
    arr[length-1]=0;
    length--;
}
int main(){
    int arr[12]={1,2,3,4,5,7,8,9};
//  int arr[12]={0,1,2,3,4,5,6,7};
    int length=8;
    cout<<"Enter the element and position to insert"<<" ";
    int element,position;
    // cin>>element; //6
    cin>>position; //5
    
    deleteAtIndex(arr,position,length);

    for(int ele:arr){
        cout<<ele<<" ";
    }
    cout<<endl;
    cout<<length;

    
}