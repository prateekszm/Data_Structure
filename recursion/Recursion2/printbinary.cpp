#include<iostream>
using namespace std;
void printbinary(int n){
    if(n==0){
        return;
    }
    printbinary(n%2);
    cout<<n%2<<" ";
}
int main(){
    printbinary(22);
}