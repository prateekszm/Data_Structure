#include <bits/stdc++.h>
using namespace std;
void remove_adjacent_duplicates_k_elements(string &str){
	stack<pair<char,int>> st;
	pair<char,int> t;
	int k;
	cin>>k;
	int i=0;
	while(i<str.length()){
		if(st.empty()){
			st.push({str[i],1});
		}else{
			if(st.top().first==str[i]){	
				if (st.top().second==(k-1))
				{
					for (int j = 0; j < k-1; ++j)
					{
						st.pop();
					}
				}else{
					st.push({str[i],st.top().second+1});
				}
			}else{
				st.push({str[i],1});
			}

		}
		i++;
	}
	string sss="";
	while(!st.empty()){
		sss=st.top().first+sss;
		st.pop();
	}
	cout<<sss<<endl;
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	
	string str;
	cin>>str;
	remove_adjacent_duplicates_k_elements(str);
}
