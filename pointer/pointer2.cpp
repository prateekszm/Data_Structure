#include<iostream>
using namespace std;
int main(){
	int i=100;
	int *p=&i;

	cout<<sizeof(p)<<endl;
	cout<<i<<endl;
	cout<<p<<endl;
	cout<<*p<<endl;

	i++;

	//Lets check here 
	cout<<i<<endl<<*p<<endl<<p;

	//Am i a mean person?

	int a = *p;
	a++;
	cout<<a<<endl<<i<<endl;

	*p=23;
	cout<<i<<endl;
	cout<<*p<<endl;

	(*p)++;
	cout<<i<<endl;
	cout<<*p<<endl;

	int *q=p;
	cout<<sizeof(q);
	
}
