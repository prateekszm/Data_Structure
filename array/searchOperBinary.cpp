#include<bits/stdc++.h>
using namespace std;
int binarySearchRec(vector<int>arr,int key,int low,int high){
   
   if(low<=high){
        int mid=(low+high)/2;
    //    int  mid=low+(high-low)/2;
       if(arr[mid]==key){
       return mid;
   }
    if(key>arr[mid]){
       return binarySearchRec(arr,key,mid+1,high);
   }else return binarySearchRec(arr,key,low,mid-1);
    
   } 
   return -1;
}
int binarySearchItr(vector<int> arr,int key){
    int high=arr.size()-1;
    int low=0;
    while (low<=high)
    {
        int mid=(low+high)/2;
        if(key==arr[mid]){
            return mid;

        }else if(key>arr[mid]){
            low=mid+1;
        }else high = mid -1;
        
    }

    return -1;
    

}
int main(){
    vector<int> arr{4 ,3,6,8,32,6,15,312,678,69};
    sort(arr.begin(),arr.end());
    //Now we have sorted vector 
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    
    //using iterative binary search
    cout<<endl;
    int key;
    cout<<"Enter the key to be searched: ";
    cin>>key;

    /* int index=binarySearchItr(arr,key);
    cout<<index+1;
    cout<<endl;
    if(index>0){
        cout<<arr[index]<<" same as key "<<key;
    }else cout<<"Not found";
 */

    //using binary search recursive
    int index2=binarySearchRec(arr,key,0,arr.size());
    cout<<index2+1;
    cout<<endl;
    if(index2>0){
        cout<<arr[index2]<<" same as key "<<key;
    }else cout<<"Not found";
    
    
    

}