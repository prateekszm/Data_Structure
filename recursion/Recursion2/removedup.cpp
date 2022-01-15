#include<bits/stdc++.h>
using namespace std;
void removedup(char[]);
int main(){
    char str[100];
    cout<<"Enter the char array"<<endl;
    cin>>str;
    removedup(str);
    cout<<str<<endl;
}
void removedup(char s[]){
    if(s[0]=='\0'){
        return;
    } 
    if(s[0]==s[1]){
        int i=1;
        for(;s[i]!='\0';i++){
            s[i-1]=s[i];
        }
        s[i-1]=s[i];


        return removedup(s);
    }else{
        return removedup(s+1);
    }

}