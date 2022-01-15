/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<bits/stdc++.h>
using namespace std;
class Matrix
{
private:
    int *arr;
    int n;
public:
    Matrix(int n){
        this->n=n;
        n=n*(n + 1)/2;
        arr=new int[n];
        // memset(arr,0,sizeof(arr));
    }
    void setData(int ,int ,int);
    int getData(int ,int );
    void dispaly();
    ~Matrix(){delete []arr;}
};
void Matrix::setData(int i,int j,int data){
    int index=-1;
    if(i>=j){
       index=n*(j-1)-(j-2)*(j-1)/2 + i-j;
       arr[index]=data;
    }
}
int Matrix::getData(int i,int j){
    int index=-1;
    if(i>=j){
        return arr[n*(j-1)-(j-2)*(j-1)/2 + i-j];
    }
    return -1;

}
void Matrix::dispaly(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i>=j){
                int index=n*(j-1)-(j-2)*(j-1)/2 + i-j;
                cout<<arr[index]<<" ";
            }else cout << "0 ";
        }
        cout<<endl;
    }
}
int main(){
    Matrix m(4);
    m.setData(1,1,7);
    cout<<m.getData(1,1);
    cout<<endl;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++){
            m.setData(i,j,rand()%4+1);
        }
    }
    m.dispaly();
    
    
}