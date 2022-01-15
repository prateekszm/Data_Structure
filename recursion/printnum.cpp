#include <bits/stdc++.h>
using namespace std;
void fun(int);
int x=1;
int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    fun(n);
    
    return 0;


}
void fun(int num){
    if(num){
        fun(num-1);
    }else{
        return;
    }
    cout<<num<<" ";

}












