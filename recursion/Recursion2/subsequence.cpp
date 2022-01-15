#include<iostream>
using namespace std;
void print(string &s,string opt,int size){
    if(s.length()==size){
        cout<<opt<<" ";
        return;
    }
    print(s,opt,size+1);
    print(s,opt+s[size],size+1);
}
int main(){
    string s="abc";
    string opt="";
    print(s,opt,0);
}