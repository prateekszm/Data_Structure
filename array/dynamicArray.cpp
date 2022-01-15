#include<iostream>
using namespace std;
int main(){
    int ar[5];
    int *p;
    p=new int[5];
    for (int  i = 0; i < 5; i++)
    {
        cin>>p[i];
    }
    cout<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<p[i]<<" " ;
    }
    cout<<endl;

    
    int *q=new int[10];
    for (int i = 0; i < 10; i++)
    {
        //Coppying the elements from it's 
        q[i]=p[i];

    }
    
    //deleting the elements from p 
    delete []p;
    //pointing the new location that is created by the q from p
    p=q;
   //intitlizing the q as null
    q=nullptr;

    //printing the value from p by increasig the size
    for (int i = 0; i < 10; i++)
    {
        cout<<p[i]<<" " ;
    }
    


}