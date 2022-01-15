#include<iostream>
using namespace std;
int fun(int);
int main(){
    int x=156;

    int number=fun(x);
    cout<<number;
}

int fun(int num){
   static int count=0;

    if(num){
        int n=num/10;
        num=n;
        count++;
        fun(num);

    }else{
        return 0;
    }

    return count;
}