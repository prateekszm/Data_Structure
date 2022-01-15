#include<bits/stdc++.h>
using namespace std;
class DiagnalMatrix
{
private:
    int *arr;
    int n;
public:
    DiagnalMatrix(int n){
        this->n=n;
        arr=new int[n];
    }
    void setData(int ,int ,int);
    int getData(int ,int );
    void dispaly();
    ~DiagnalMatrix(){delete []arr;}
    
};

void DiagnalMatrix::setData(int i,int j,int data){
    if(i==j){
        arr[i-1]=data;
    }
}

int DiagnalMatrix::getData(int i,int y){
    if(i==y){
        return arr[i-1];
    }
    return -1;
}
void DiagnalMatrix::dispaly(){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if(i==j){
                cout<<arr[i-1]<<" ";
            }else cout<<"0 ";
        }
        cout<<endl; 
    }
    
}

int main(){
    DiagnalMatrix m(3);
    m.setData(1,1,5);m.setData(2,2,3);m.setData(3,3,5);
    m.dispaly();
    cout<<m.getData(1,1);
}


