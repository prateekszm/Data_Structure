#include<iostream>
using namespace std;
int main(){

	int a[]={1,2,3,4};
	char b[]={"PRATEEK"};

	cout<<a<<endl;
	cout<<b<<endl;

	char *p =&b[0];
	cout<<p<<endl;	

	char c1='a';
	char *ch1=&c1;
	cout<<c1<<endl;
	cout<<ch1<<endl;

	//Important stuffs 
	char str[]={"ABCDEFGH"}; //Array is created.
	char *ptr="awfbhjbf"; //This will cause error because it is allocating temporarly memory and giving this to ptr 
}
