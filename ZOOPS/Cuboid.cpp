#include<bits/stdc++.h>
using namespace std;
class Rectangle{
    private:
    int length;
    int breadth;
    public:
    Rectangle(){
        length=1;
        breadth=1;
    }
    Rectangle(int l,int b){
        length=l;
        breadth=b;
    }
    int area(){
        return length*breadth;

    }
    void setlength(int l){
        length=l;
    }
    void setBreadth(int b){
        breadth=b;
    }
    void dispaly(){
        cout<<"lenhth : "<<length<<endl<<"breadth : "<<breadth;
    }
};
class Cuboid:public Rectangle{
    private:
    int height;
    public:
    Cuboid(int l,int b,int h):Rectangle(l,b){
        // setlength(l);
        // setBreadth(b);
        // Rectangle(l,b);
        height=h;
    }
    void show(){
        dispaly();
        cout<<endl<<"height : "<<height<<endl;

    }


};
int main(){
    Cuboid c(2,3,4);
    // c.setlength(4);
    // c.setBreadth(4);
    c.show();
}