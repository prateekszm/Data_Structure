#include<iostream>
using namespace std;
bool checkpal(string s,int start,int end){
    if(start>=end){
        return true;
    }
    return(s[start]==s[end]&&checkpal(s,start+1,end-1));
    return false;


}
int main(){
    string s="abbac";
    cout<<checkpal(s,0,4);
}