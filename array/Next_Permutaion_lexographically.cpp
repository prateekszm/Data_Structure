/*First of all what is Lexicographical order ? 
Lexicographical order is nothing but the dictionary 
order or preferably the order in which words appear 
in the dictonary.
					-Wikipedia

Let's see the example
Example 1 
			word        Next Permutation
			abcdef    -> abcdfe   Here 'f' will come first because 'f' i greater tha 'e' 

Example 2
		
		"11112"  ->  "11121"    Here we can make "11121" just next greater than "11112"

Example 3

		"1382279861"  ->  "1382281679"  Note we have to make just next bigger than original value.

*/

#include <bits/stdc++.h>
using namespace std;
//Next permutation lexographically order 

void reverse_str(string &str , int first , int last){
	last=last-1;
	while(first<last){
		swap(str[first] , str[last]);
		first++;
		last--;
	}
}

string next_permutation2(string &str){
	int n = str.size();

	int i = str.size()-2;

	//First find which i element is samller than i+1 element from backward
	while(str[i] > str[i+1]) i--;  

	
	if(i>=0){
		//take one pointer from i+1 and find the next greater element of i th  index element
		int j = i+1;
		//Why are we sure that we are going to find the next greater element of i th index forward
		//because we all the elements after ith index value is in decreasing order
		while( j<n and str[i] < str[j]) j++;  //str[i] < str[j] i= 7 then j can be 9 8 when j is 
											  //is pointing at 6 then the loop will break

		//swap the ith index value with the j-1 th index value
		swap(str[i], str[j-1]);				  
		
		//sort the string from i+1th index to n-1 index
		//since sorting will take min O(nlogn) and we know all the element are in decreasing order the 
		// we can just swap the element in O(n) time;
		reverse_str(str, i+1, n);
		return str;
	}else{	
		// reverse_str(str,i+1, n);
		return "All Number is in decreasing order";
	}

	// return str;
}
int main(){
		//		01234567
	string str="1382279861";
	string cpy=str;
	next_permutation(cpy.begin(),cpy.end());
	cout<<cpy;
	cout<<endl;
	cout<<next_permutation2(str);

}