#include <bits/stdc++.h>
using namespace std;
 
// A simple recursive program to
// find N'th fibonacci number
int fib(int n)
{

    if (n <= 1){
        cout<<n;
        return n;
    }

    return fib(n - 1) + fib(n - 2);
}
 
// Returns number of ways to
// reach s'th stair
int countWays(int s)
{
    return fib(s + 1);
}
 

int main()
{
    int s = 4;
    int dp[6];
    dp[0]=0;
    cout <<endl<< "Number of ways = " << countWays(s);
 
    return 0;
}