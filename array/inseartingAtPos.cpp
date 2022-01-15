#include<iostream>
using namespace std;
void insertAtIndex(int arr[],int elemnt,int position,int &length){
    for(int i=length;i>position;i--){
        arr[i]=arr[i-1];
    }
    arr[position]=elemnt;
    length++;
}
int main(){
    int arr[12]={1,2,3,4,5,7,8,9};
    int length=10;
    cout<<"Enter the element and position to insert"<<" ";
    int element,position;
    cin>>element; //6
    cin>>position; //5
    
    insertAtIndex(arr,element,position,length);

    for(int ele:arr){
        cout<<ele<<" ";
    }
    cout<<endl;
    cout<<length;

    
}