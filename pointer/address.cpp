#include<iostream>
using namespace std;
int main(){
	int i=10;
	cout<<i<<endl;
	cout<<&i<<endl;
	int *ptr = &i;
	cout<<ptr<< endl;
	cout<<*ptr<<endl;
	

	float f=10.69;
	float *ptr2=&f;
	cout<<ptr2<<endl;

	double d=1732.74;
	double *dPtr=&d;
	cout<<endl<<dPtr;
}
