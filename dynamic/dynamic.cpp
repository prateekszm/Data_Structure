#include<iostream>
using namespace std;
int main(){
    int *p=new int;
    *p=10;
    cout<<*p<<endl;


    cout<<"Enter the elements to be entered"<<endl;
    int n;
    cin >> n;
    int *pc=new int[n];

    for(int i=0;i<n;i++){
        pc[i]=rand()%100;
        cout<<pc[i]<<" ";
    }

    cout<<endl;

    int max=-1;
    for(int i=0;i<n;i++){
        if(max<pc[i]){
            max=pc[i];
        }
    }

    cout<<"Max"<<max;

    delete pc;
    delete []pc;
     
 
}