#include<iostream>
using namespace std;
int main(){
    int *p=new int[10];
    for (int i = 0; i < 10; i++)
    {
        cout<<"Enter the value of "<< i <<"th"<<" ";
        p[i]=rand()%10;

    }

    cout<<"Now Traversing the array"<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout<<p[i]<<" ";
    }
    delete []p;
    
    
}