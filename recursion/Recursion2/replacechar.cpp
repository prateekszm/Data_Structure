#include<bits/stdc++.h>
using namespace std;
void replacechar(char[],char,char);
int main(){
    char str[100],charac,toreplace;
    cout<<"Enter the char array and character and which char to replace with whom"<<endl;
    cin>>str>>charac>>toreplace;
    replacechar(str,charac,toreplace);
    cout<<str<<endl;
}
void replacechar(char s[],char victim,char host){
    if(s[0]=='\0'){
        return;
    }
    if(s[0]==victim){
        s[0]=host;
        return replacechar(s+1,victim,host);
    }else{
        return replacechar(s+1,victim,host);
    }

}