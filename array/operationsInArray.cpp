#include<bits/stdc++.h>
using namespace std;
void display(int *arr,int length){
    for (int i = 0; i < length; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

void max(int *arr,int length){
    int max=arr[0];
    for (int i = 0; i < length; i++)
    {
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<endl<<max<<endl;
    
}

void average(int *arr,int length){
    int total=0; 
    for (int i = 0; i < length; i++)
    {
        total=total+arr[i];
    }
    cout<<total/length;
    
}

int sum(int *arr,int length){
    if(length<0){
        return 0;
    }else return sum(arr,length-1)+arr[length];
}


int main(){
    int arr[20];
    int lenght=20;
    // arr={1,3,5,62,4,6,24,6,7,9,47,8,75,7,9}
    for (int i = 0; i < 20; i++)
    {
        arr[i]=rand()%10;
    }
    display(arr,lenght);
    max(arr,lenght);
    average(arr,lenght);
    cout<<endl;
    cout<<sum(arr,lenght-1)<<" is the total sum of this array";
    
}