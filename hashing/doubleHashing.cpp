#include <bits/stdc++.h>
#include "HashTable.h"
using namespace std;


int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	
	Hashtable<int> h;
	h.insert("mango",200);
	h.insert("apple",100);
	h.insert("banana",140);
	h.insert("kiwi",160);
	h.insert("papaya",400);
	h.insert("litchi",120);

	h.print();

	string fruit;
	cin>>fruit;
	int * price=h.search(fruit);
	if(h.search(fruit)!=NULL){
		cout<<"Price of fruit is "<<*price<<endl;
	}else{
		cout<<"Fruit is not present"<<endl;
	}

	h["newFruit"]=130;
	cout<<"new fruit cost is : "<<h["newFruit"]<<" "<<endl;
	h["newFruit"]+=40;
	cout<<"updated new  fruit cost is : "<<h["newFruit"]<<" "<<endl;


	/*if(h.search(fruit)!=NULL){
		cout<<"Price of fruit is "<<* h.search(fruit)<<endl;
	}*/


	return 0;
}
