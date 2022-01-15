
#include<bits/stdc++.h>
using namespace std;
int robber(int, vector<int>);
int main(){
    vector<int> v={11,12,3,5};
     int ans=robber(0,v);
     cout<<ans<<endl;
    return 0;
}

int robber(int i,vector<int>&house){
    if(i>=house.size())return 0;
    int chori=house[i]+robber(i+2,house);
    int notchori=0+robber(i+1,house);
    return max(chori,notchori);
}