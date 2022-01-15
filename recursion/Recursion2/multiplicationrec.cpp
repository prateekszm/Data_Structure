#include<iostream>
int multiply(int ,int);
using namespace std;
int main(){
    int x=3,y=5;

    int ans=multiply(x,y);
    cout<<ans<<endl;
}

int multiply(int x, int y){
    if(y==0){
        return 0;
    }
    int ans=multiply(x,y-1);
    // ans+x;
    return ans+x;
}