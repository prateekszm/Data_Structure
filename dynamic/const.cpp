#include<iostream>
using namespace std;

void fun(const int & );
void fun2(const int *);
int main(){
    const int a=10;
    int j=12;
    const int & k=j;
    j++;
    //we are not able to do k++
    const int jp=100;
    int & lo=(int&)jp;
    lo++;
    cout<<jp<<endl;
    cout<<jp<<endl;
    cout<<lo<<endl;
    int *jj=&j;
    fun(j);
    fun2(&j);



    //constant pointers 

    int aa=10;
    int b=20;
    int  const * p=&aa;
    p=&b;

    int * const p2=&aa; //p2 is a constant integer pointing to a integer this will not able to change its in address
    (*p2)++;
    //p2=&b;

    int const * const p3=&aa;
    //p3++;
    //(*p3)++;
}

void fun(int const & s ){
    //this is promosig that i will not chage the integer
}

void fun2(int const * a){   //a is a pointer pointing to a constant integer
   // (*a)++;  cant modify the value
}