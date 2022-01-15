#include<iostream>
using namespace std;
int main(){
	int i;
	cout<<"The value of i:"<<i<<endl;
	i++;
	cout<<i<<endl;

	int *p;
	cout<<*p<<endl; //segmentation fault 
	cout<<p<<endl; //why are you accessing un authorized memory
	
}
