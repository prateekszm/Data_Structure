#include<iostream>
using namespace std;
int main(){

    int *p=new int[10];
    for (int i = 0; i < 10; i++)
    {
        // cout<<"Enter the value of "<< i <<"th"<<" ";
        p[i]=rand()%10;

    }
    cout<<"Enter the element to find : ";
    int a;
    cin>>a;
    int flag=1;
    //Linear seach time complex:o(n)
    for (int i = 0; i < 10; i++)
    {
        if(p[i]==a){
            cout<<i<<" th index";
            flag=0;
            break;
        }
    }
    if(flag==1){
        cout<<"Not fount ma chuda ludae"<<endl;
    }
    delete []p;
    
}