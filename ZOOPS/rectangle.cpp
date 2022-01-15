#include<bits/stdc++.h>
using namespace std;
class rectangle
{
public:
    int length,breadth,peremiter,area;
public:
    int areas(){
        area=length*breadth;
        return area;
    }
    int perimeter(){
        peremiter=2*(length+breadth);
        return peremiter;
    }
};
int main(){
    rectangle r1,r2;
    r1.length=10;
    r1.breadth=20;
    cout<<r1.areas();
    rectangle *p=new rectangle();
    p->area=40;
    cout<<endl;
    cout<<p->area;
    p->length=9;
    p->breadth=10;
    cout<<endl;
    cout<<p->perimeter()<<endl;
}


/* rectangle::rectangle()
{
} */

// rectangle::~rectangle()
// {
// }

