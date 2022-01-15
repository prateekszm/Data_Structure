#include<iostream>
using namespace std;
int count(int);
int main(){
    int num;
    cout<<"Enter the number :";
    cin>>num;

    int sum=count(num);
    cout<<sum<<endl;

}
int count(int num){
    if(num==0){
        return 0;
    }
    int sum=count(num/10);
     
    // return num%10+count(num/10);
    return sum+(num%10);
}
