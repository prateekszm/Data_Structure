#include <cstdio>
#include "trie.h"
using namespace std;


int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	Trie t;
	string words[]={"Ligma","balls","ball","sugoondeez","suckma","wyanekerr"};
	
	for(auto wod:words){
		t.insert(wod);
	}
	
	string wordts;
	cin>>wordts;
	cout<<t.search(wordts);

}
