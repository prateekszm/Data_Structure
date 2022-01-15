#include<iostream>
using namespace std;
int fun(int,int);
int fun1(int[],int,int);

int fun1(int a[],int size,int si=0){ //si=0 is default argument

}

int fun(int a, int b){
    return (a>b)? a:b;
}

int main(){
    int a,b;
    int c=(a>b)? a:b;

    int arr[10];

    fun1(arr, 8);

}