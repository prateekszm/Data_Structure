#include<iostream>
using namespace std;
int power(int,int);
int main(){
    int x=2,y=5;
    int sum=power(x,y);
    cout<<sum;
}

int power(int base,int exponent){
    if(exponent==0){
        return 1;

    }

    return base*power(base,exponent-1);
}