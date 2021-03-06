#include <bits/stdc++.h>
using namespace std;

#define int 		long long int
#define F 			first
#define S 			second
#define pb 			push_back
#define vi 			vector<int>
#define endl 		"\n"
#define	print(a)	for(auto x : a) cout<< x <<" "; cout<<endl;
string breakPalindrome(string s) {
	 
	        int n=s.size();
	       if(s.size()==1){
			return "";
		}
		
	    for(int i=0;i<n;i++){
	        int j=n-1-i;
	        if(i==j){
	            continue;
	        }
	        if(s[i]!='a'){
	            s[i]='a';
	            return s;
	        }
	    }
	      s[n-1]='b';
	        return s;
	    

}

void solve(){
	cin.get();
	cin.get();
	string str;
	cin>>str;
	// cout<<str<<endl;
	cout<<breakPalindrome(str)<<endl;

}


int32_t main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	clock_t z = clock();
	int t = 1;
	cin>> t;
	while (t--) solve();
	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);


	return 0;
}



/*
Given a palindromic string of lowercase English letters palindrome, replace exactly one character with any 
lowercase English letter so that the resulting string is not a palindrome and that it is the lexicographically 
smallest one possible.

Return the resulting string. If there is no way to replace a character to make it not a palindrome, return an 
empty string.

A string a is lexicographically smaller than a string b (of the same length) if in the first position where a 
and b differ, a has a character strictly smaller than the corresponding character in b. For example, "abcc" is 
lexicographically smaller than "abcd" because the first position they differ is at the fourth character, and 'c' 
is smaller than 'd'.

 

Example 1:

Input: palindrome = "abccba"
Output: "aaccba"
Explanation: There are many ways to make "abccba" not a palindrome, such as "zbccba", "aaccba", and "abacba".
Of all the ways, "aaccba" is the lexicographically smallest.
Example 2:

Input: palindrome = "a"
Output: ""
Explanation: There is no way to replace a single character to make "a" not a palindrome, so return an empty string.
Example 3:

Input: palindrome = "aa"
Output: "ab"
Example 4:

Input: palindrome = "aba"
Output: "abb"
 

Constraints:

1 <= palindrome.length <= 1000
palindrome consists of only lowercase English letters.
*/