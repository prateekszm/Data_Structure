#include <bits/stdc++.h>
using namespace std;

#define int 		long long int
#define F 			first
#define S 			second
#define pb 			push_back
#define vi 			vector<int>
#define endl 		"\n"
#define	print(a)	for(auto x : a) cout<< x <<" "; cout<<endl;

vector<int> findAnagrams(string s, string p) {
	vi op;
    vi s_arr(26,0);
    vi p_arr(26,0);
    int left=0,right=0;
    int window=p.size();
    int len=s.size();

    if(s.size()<p.size()){
    	return op;
    }
    while(right<window){
    	p_arr[p[right]-'a'] +=1;
    	s_arr[s[right++]-'a'] +=1;
    }
    cout<<right<<" ->";
    right-=1;

    while(right<len){
    	if(s_arr == p_arr){
    		op.push_back(left);
    	}
    	right+=1;
    	if(right!=len){
    		s_arr[s[right]-'a']+=1;
    	}
    	s_arr[s[left]-'a']-=1;
    	left++;
    }

    for(auto x:op){
    	cout<<x<<" ";
    }

    return op;

}
vector<int> findAnagrams2(string s, string p) {
    vector<int> op;
    vector<int> s_hash(26,0);
    vector<int> p_hash(26,0);
    int len=s.size();
    int win=p.size();
    int left=0;
    int right=0;
    
    if(s.size()<p.size()){
	    return op;
    }   
    //adding p elements in hash table 
    for( ;right<win;right++){
        s_hash[s[right]-'a']+=1;
        p_hash[p[right]-'a']+=1;
    }
    // cout<<right;
    
    //for example 1 abc Right will be 3 //left is zero
    right-=1;
    while(right<len){
        
        if(s_hash==p_hash){
            op.push_back(left);
        }
        //push right
        right+=1;
        if(right!=len){
            s_hash[s[right]-'a']+=1;
        }
        
        //pop left
        
        s_hash[s[left]-'a']-=1;
        left++;
        
    }
    for(auto x:op){
    	cout<<"  ["<<x<<"] ,";
    }
    return op;
    
}

void solve(){
	string s="abab";
	string p="ab";
	findAnagrams2(s,p);

}


int32_t main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	clock_t z = clock();
	int t = 1;
	// cin>> t;
	while (t--) solve();
	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);


	return 0;
}

















/*
Given two strings s and p, return an array of all the start indices of p's anagrams in s. You may return the answer in any order.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

 

Example 1:

Input: s = "cbaebabacd", p = "abc"
Output: [0,6]
Explanation:
The substring with start index = 0 is "cba", which is an anagram of "abc".
The substring with start index = 6 is "bac", which is an anagram of "abc".
Example 2:

Input: s = "abab", p = "ab"
Output: [0,1,2]
Explanation:
The substring with start index = 0 is "ab", which is an anagram of "ab".
The substring with start index = 1 is "ba", which is an anagram of "ab".
The substring with start index = 2 is "ab", which is an anagram of "ab".
 

Constraints:

1 <= s.length, p.length <= 3 * 104
s and p consist of lowercase English letters.
*/

