#include<bits/stdc++.h>
using namespace std; 
bool isSorted(int *arr ,int length){
    for (int i = 0; i < length-1; i++)
    {
        if(arr[i]>arr[i+1]){
            return false;
        }

    }

    return true;
    
}
void swap(int &low, int &high){
    int temp=low;
    low=high;
    high=temp;
}
void arrangePtveNegtv(int *arr,int size){
    int low=0, high=size-1;
    while (low<high)
    {
        while(arr[low]>0)
        {low++;}

        while(arr[high]<0)
        {high--;}
        if(low<high){
            swap(arr[low],arr[high]);
        }
    }
    
}
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    
    int arr[20]{1,2,3,4,5,6,7,8,9,10,12,13,14,15};
    int length=14;
    int key =11;
    int i=length-1;
    /* insearting element is array in o(n) complexity */
    while(arr[i]>key){
        arr[i+1]=arr[i];
        i--;
    }
    arr[i+1]=key;
    for(int element:arr){
        cout<<element<<" ";
    }
    length++;
    bool isTrue=isSorted(arr,length);
    cout<<endl;
    cout<<endl<<isTrue;
    cout<<endl;
    cout<<endl;


    int arr2[]{1,7,8,-8,-3,1,-5,-8,-28,3,-6,3,5,2};
    for(int ele:arr2){
        cout<<ele<<" ";
    }
    int size=14;
    cout<<size;

    arrangePtveNegtv( arr2,size);
    cout<<endl;

    for(int ele:arr2){
        cout<<ele<<" ";
    }

}