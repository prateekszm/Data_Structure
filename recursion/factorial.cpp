#include<iostream>
using namespace std;
int factorial(int);
int main(){
    int n=7;
    int output=factorial(n);
}

int factorial(int n){
    if(n==0){
        return 1;
    }
    int smalloutput=factorial( n-1);
    return n* smalloutput;
}