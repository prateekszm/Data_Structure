//This is my first program in linux
#include<iostream>
using namespace std;
void fun(int i);
int main()
{
    int i=7;
    fun(i);
}
 void fun(int i)
    {
	int n=i;
        if(n<=0)
           return;
        printf("GFG \n");
        fun (n/2);
        fun ( n / 2 );
    }



























    
