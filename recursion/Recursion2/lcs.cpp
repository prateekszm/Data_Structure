#include <bits/stdc++.h>
using namespace std;
const int maxi = 1000;
int lcs(string X, string Y, int m, int n, int mem[][maxi])
{
    if (m == 0 || n == 0)
		return 0;
    if (mem[m - 1][n - 1] != -1)
		return mem[m - 1][n - 1];
    if (X[m - 1] == Y[n - 1]) 
         return mem[m - 1][n - 1] = 1 + lcs(X, Y, m - 1, n - 1, mem);
	else 
        return mem[m - 1][n - 1] = max(lcs(X, Y, m, n - 1, mem),lcs(X, Y, m - 1, n, mem));
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    // cout<<"Enter the String 1:\n";
	string x; 
    cin>>x;
    // cout<<"Enter the String 2:\n";
	string y; 
    cin>>y;
	int m = x.size();
	int n = y.size();   
    int mem[m][maxi];
    memset(mem,-1,sizeof(mem));
    cout << "Length of LCS: " << lcs(x, y, m, n, mem);
}