#include<bits/stdc++.h>
using namespace std;
class Complex
{
private:
    int real;
    int imag;
public:
    Complex(int real,int imag);
    friend ostream & operator<<(ostream &out ,Complex &c );
    
};
ostream & operator<<(ostream &out, Complex &c){
    out<<c.real<<" + i "<<c.imag;
    return out;
}
/* default constructor */
Complex::Complex(int real=0,int imag=0)
{
    this->real=real;
    this->imag=imag;

}
int main(){
    Complex q(2,4);
    cout<<q;
    Complex r;
    cout<<r;
}


