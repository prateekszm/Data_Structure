#include<iostream>
using namespace std;
int length(char[]);
void removex(char[]);
int main(){
    char str[100];
    cin>>str;
    int n=length(str);
    cout<<n<<endl;
    removex(str);
    cout<<str<<endl;
    int num=length(str);
    cout<<num<<endl;

}

int length(char s[]){
    if(s[0]=='\0'){
        return 0;
    }
    int smallsrtring=length(s+1);
    return 1+smallsrtring;

}

void removex(char s[]){
    if(s[0]=='\0'){
        return;
    }
    if(s[0]!='x'){
        return removex(s+1);
    }else{
        int i=1;
        for(;s[i]!='\0';i++){
            s[i-1]=s[i];
        }
        s[i-1]=s[i];
        return removex(s);
    }

}