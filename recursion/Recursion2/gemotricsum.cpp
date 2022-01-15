#include<iostream>
#include<cmath>
using namespace std;
double gemotric(int);
int main(){
    int k;
    cout<<"Enter the value for k: ";
    cin>>k;
    double sum=gemotric(k);
    cout<<sum;

}

double gemotric(int num){
    if(num==0){
        return 1;
    }

    double ans=gemotric(num-1);

    return ans+(1/pow(2,num));





}