#include<bits/stdc++.h>
using namespace std;
int staircase(int n){
	if(n<0){            //Base Case 1
        return 0;
    }

    if(n==0){           //Base Case 2
        return 1;
    }

    
    int x= staircase(n-1);    //Stepping 1 step
    int y= staircase(n-2);    //Stepping 2 step
    int z= staircase(n-3);    //Stepping 3 step

    return x+y+z;
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int stairs;
	cin>>stairs;
	int totalways=staircase(stairs);
	cout<<totalways;

}