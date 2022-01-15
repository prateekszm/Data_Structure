#include<iostream>
using namespace std;
int fun(int);
int fun2(int);
int fun3(int);

int main(){
	cout<<"Hello world";
	cout<<"\n";
	cout<<fun(5);
	cout<<" /n\n";
	cout<<fun2(5);
	cout<<"\n";
	cout<<fun3(5);
	
}
int fun(int n){
	return n*(n+1)/2;
}

int fun2(int n){
	int sum=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			sum++;
		}
	}
	return sum;
}

int fun3(int n){
	int sum=0;
	for(int i=1;i<=n;i++){
		sum=sum+i;
	}
	return sum;
}
