#include<iostream>
using namespace std;
int count(int);
int main(){
    int n;
    cout<<"Enter the number to count zero: ";
    cin>>n;
    // int output=n/10;
    // cout<<output<<endl;

    int ans = count(n);
    cout<<ans<<endl;

}

/* int count(int num){
    if(num==0){
        return 0;
    }
    
    int ans=count(num/10);
    if(num%10==0){
        ans+1;
    }

    
    return ans;
} 
 */

int count(int num){
    if(num==0){
        return 0;
    }
    
    int ans=count(num/10);
    if(num%10==0){
        return 1+ans;
    }

    
    return ans;
} 


/* int count(int num){
    static int count2=0;
    if(num==0){
        return 0;
    }
    if(num%10==0){
        count2++;
    }
     count(num/10);
    return count2;
} */