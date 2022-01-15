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
        n=n*(n+1)/2;
        arr=new int[n];
        memset(arr,0,sizeof(arr));
    }
    void setData(int ,int ,int);
    int getData(int ,int );
    void dispaly();
    ~Matrix(){delete []arr;}
};
void Matrix::setData(int i,int j,int data){
    int index=-1;
    if(i>=j){
        index=(i*(i-1)/2)+j-1;
        arr[index]=data;
    }
}
int Matrix::getData(int i,int j){
    int index=-1;
    if(i>=j){
        index=(i*(i-1)/2)+j-1;
        return arr[index];
    }
    return -1;

}
void Matrix::dispaly(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i>=j){
                int index=(i*(i-1)/2)+j-1;
                cout<<arr[index]<<" ";

            }else cout<<"0 ";
        }
        cout<<endl;
    }
}
int main(){
    Matrix m(4);
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++){
            m.setData(i,j,rand()%4+1);
        }
          
    }
    m.dispaly();
}