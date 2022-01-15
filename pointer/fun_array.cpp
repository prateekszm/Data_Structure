#include<iostream>
using namespace std;

int sum(int *a,int size){
	//cout<<sizeof(a)<<endl;
	int sum=0;
	for(int i=0;i<size;i++){
		sum=+a[i]; //internaly it convert to a[i]=*(a+i)
	}
	return sum;
}

int main(){
	int a[10];
	cout<<sizeof(a)<<endl;
	cout<<sum(a,10)<<endl;
}
