#include<bits/stdc++.h>
using namespace std;
class rectangle
{
private:
    int length,breadth,peremiter,area;
public:
    /* rectangle(){
        length=0;
        breadth=0;
    } */
    /* this will be ambugity */

    rectangle(int l=0,int b=0){
        getValue(l,b);
    }
    rectangle(rectangle &r){
        length = r.length;
        breadth = r.breadth;
    }
    void getValue(int l , int b){
        this -> length=l;
        this -> breadth=b;
    }
    int areas(){
        area=length*breadth;
        return area;
    }
    int perimeter(){
        peremiter=2*(length+breadth);
        return peremiter;
    }
    inline  bool isSquare();

    
};
bool rectangle::isSquare(){
    return length==breadth;
}
int main(){
    rectangle *p=new rectangle(4,6);
    rectangle cd(5,8);
    rectangle r(cd);
    // p->getValue(3,4);
    cout<<p->areas();
    cout<<endl<<r.areas();
    cout<<endl<<r.isSquare();
    
    
}


/* rectangle::rectangle()
{
} */

// rectangle::~rectangle()
// {
// }

