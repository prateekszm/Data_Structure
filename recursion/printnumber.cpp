#include<iostream>
using namespace std;
void fun(int);
int main(){
    int x=6;
    fun(x);
}

void fun(int num){
    if(num){
        fun(num-1);
    }else{
        return;
    }

    cout<<num<<" ";
    
}