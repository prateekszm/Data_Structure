#include <bits/stdc++.h>
using namespace std;
int subs(string,string[]);
int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	string input;
    cin>>input;
    int n=input.size();
    int outputt=pow(2,n);
    string* output=new string[outputt];
    int count=subs(input,output);
    for(int i=0;i<outputt;i++){
        cout<<output[i]<<" ";
    }


}

int subs(string input,string* output){
    if(input.empty()){
        output[0]="";
        return 1;
        
    }
    string smallstringsize=input.substr(1);
    int smalloutput=subs(smallstringsize,output);

    for(int i=0;i<smalloutput;i++){
        output[i+smalloutput]=input[0]+output[i];
    }
    return smalloutput*2;
}


