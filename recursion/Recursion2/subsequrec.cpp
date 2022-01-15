#include<bits/stdc++.h>
using namespace std;
int subs(string,string[]);
int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	string input;
	cin>>input;
    int n=input.size();
    int outputt=pow(2,n);
    string *output=new string[outputt];
    int total=subs(input,output);
    for(int i=0;i<total;i++){
    	cout<<output[i]<<" ";
    }

}
int subs(string input,string output[]){
	if(input.empty()){
		output[0]="";
		return 1;
	}
	string smallstring=input.substr(1);
	int smalloutput=subs(smallstring,output);
	for(int i=0;i<smalloutput;i++){
		output[smalloutput+i]=input[0]+output[i];
	}
	return 2*smalloutput;
}





























