#include <bits/stdc++.h>
using namespace std;
int power(int m,int n){
	if(n==0){
		return 1;
	}
	return power(m,n-1)*m;
}

int power2(int m,int n){
	if(n==0){
		return 1;
	}
	if(n%2==0){
		return power(m*m,n/2);
	}else{
		return m*power(m*m,(n-1)/2);
	}
}
int powerFast(int m , int n){
	if (n==0)
	{
		return 1;
	}
	int num=powerFast(m,n/2);
	int numSquare=num*num;
	if(n%2==0){
		return numSquare;
	}else
		return m*numSquare;
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	cout<<powerFast(2,5);

	// for (int i = 0; i < 1000; ++i)
	// {
	// 	cout<<endl;
	// }

}








