#include<iostream>
using namespace std;
int fun(int);
int main(){
    int n;
    cout<<"Enter the n th  number position to find the fibonacci number";
    cin>>n;
    cout<<fun(n);
}

int fun(int num){
    if(num==1||num==2){
        return num-1;
    }
    int ans =fun(num-1)+fun(num-2);
    return ans;
}