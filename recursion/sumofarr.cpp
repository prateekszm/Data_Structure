#include<iostream>
using namespace std;
int sumofarr(int [],int);
int main(){
    int n;
    cout<<"Enter the n :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i]=rand()%10;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

   int total=sumofarr(arr,n);
   cout<<total;
}

int sumofarr(int arr[],int size){
    if(size<=0){
        return 0;
    }
    return (sumofarr(arr,size-1)+arr[size-1]);

}


/* 
                        arr[3,6,7,5]
                        graph
                        sumofarr(4)     16+5   at end it will return 21
                        sumofarr(3)     9+7
                        sumofarr(2)   3+6
                        sumofarr(1)   (0+arr[size-1]=3);
                        sumofarr(0)  this will return 0
 */