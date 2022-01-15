#include<iostream>
using namespace std;
int main(){
	int i=10;
	int *ptr=&i;
	cout<<i<<endl<<ptr;
	ptr=ptr+2;
	cout<<endl<<ptr<<endl;

	double dp=108.69;
	double *dpptr=&dp;
	cout<<dpptr<<endl;
	dpptr++;
	cout<<dpptr<<endl;
}
