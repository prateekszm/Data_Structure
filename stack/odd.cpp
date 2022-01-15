#include <iostream>
#include<cstring>
#include <stack>

using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	/*int n;
	cin>>n;
	int max;
	cin>>max;
	if(n%2==0){
		for(int i=0;i<=max;i++){
			if(i%2!=0){
				cout<<i<<" ";
			}
		}
	}*/
int count=0;
	for(int i=1;i<=4;i++){
		for (int j = 1; j <=4; j++)
		{
			if(i*j==4 ){
				count++;
			}
		}
	}
	cout<<count;

}