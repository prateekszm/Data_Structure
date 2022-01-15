#include<bits/stdc++.h>
using namespace std;
class operatorOverloading
{
private:
    int real;
    int img;
public:
     operatorOverloading(){
         real=0;img=0;
     }
    operatorOverloading(int a,int b);
    // ~operatorOverloading();
    operatorOverloading operator+ (operatorOverloading c);
    void dispaly();

};

int main(){
    operatorOverloading p(4,5);
    operatorOverloading q(10,11);
    operatorOverloading c(0,0);
    c=p.operator+(q);
    c.dispaly();
}





void operatorOverloading::dispaly(){
    cout<<real << " + i "<< img;
}


operatorOverloading operatorOverloading::operator+ (operatorOverloading c){
    operatorOverloading temp;
    temp.real=real+c.real;
    temp.img=img+c.img;
    return temp;
}

operatorOverloading::operatorOverloading(int a,int b)
{
    real=a;
    img=b;
}

// operatorOverloading::~operatorOverloading()
// {
// }

