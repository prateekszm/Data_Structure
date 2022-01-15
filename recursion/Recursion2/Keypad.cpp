#include<bits/stdc++.h>
using namespace std;

void findcombination(vector<char> keypad[],int input[],string str,int index){
	if(index==-1){
		cout<<str<<endl;
		return;
	}
	int digit=input[index];
	int len=keypad[digit].size();
	for(int i=0;i<len;i++){
		findcombination(keypad,input,keypad[digit][i]+str,index-1);
	}
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	vector<char> keypad[] =
    {
        {}, {},        // 0 and 1 digit don't have any characters associated
        { 'a', 'b', 'c' },
        { 'd ', 'e', 'f' },
        { 'g', 'h', 'i' },
        { 'j', 'k', 'l' },
        { 'm', 'n', 'o' },
        { 'p', 'q', 'r', 's'},
        { 't', 'u', 'v' },
        { 'w', 'x', 'y', 'z'}
    };
    int n;
    cin>>n;
    int input[n];
    for(int i=0;i<n;i++){
    	cin>>input[i];
    }

   findcombination(keypad,input,string(""),n-1);
    

}