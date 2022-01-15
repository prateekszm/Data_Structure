#include<iostream>
using namespace std;

int main(){
	int a[10];
	cout<<a<<endl;
	cout<<&a[0]<<endl;	
	a[0]=5;
	a[1]=10;
	cout<<*a<<endl;
	cout<<a+1<<endl;
	cout<<*(a+1)<<endl;
	cout<<sizeof(a)<<endl;	

	int *p=&a[0];
	cout<<p<<endl<<a;
	cout<< "The address of pointer p"<<&p<<endl;
	cout<<"The address of array a"<<a<<endl;
	cout<<"the contents in *p"<<p<<endl;
}
