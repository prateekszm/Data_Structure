#include<iostream>
using namespace std;
int main(){
cout<<"Hello World";

char s[]="abcde";
char *p=s;
cout<<s[0]<<" "<<p[0]<<endl;


char ch='a';
char *cah=&ch;
cah++;
cout<<*cah;
}
