#include<iostream>
using namespace std;
int main(){
    int n,m;
    int a[n],b[m];
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
    
    }

    for(int i=0;i<m;i++){
        cin>>b[i];
    }



    int count=0;
        int i=0,j=0;
        while(i<n&&j<m){
            if( a[i]== b[j]){
                count++;
                j++;
                i++;
            }else if(a[i]>=1){
                count++;
                i++;
            }else {
                count ++;
                j++;
            }
            
            
        }

        cout<<endl<<count;
}