#include<iostream>
using namespace std;
void increment1(int **p){
	p=p+1;  //Nothing will be happend here because it is making a copy
}
void increment2(int **p){
	*p=*p+1; // it will change the address value of p // if value id is 704 it willl be 708
}
void increment3(int **p){
	**p=**p+1;   //It will make i to 1
}
int main(){
	int i=0;
	int * p=&i;

	int **p2=&p;
	cout<<p<<endl<<&p<<endl<<p2<<endl;
	cout<<p<<endl<<*p2<<endl;
	cout<<i<<endl<<*p<<endl<<**p2<<endl;
}
