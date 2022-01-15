#include <bits/stdc++.h>
using namespace std;

class Node{
public:
	string name;
	list<string> nbrs;
	Node(string name){
		this->name=name;
	}
};

class Graph{
	//All nodes are present

	//hashmap(string , node*)

	unordered_map<string,Node*> m;
public:
	Graph(vector<string> cities){
		for(auto city:cities){
			m[city]=new Node(city);
		}
	}

	void addEdge(string x, string y,bool undir=false){
		m[x]->nbrs.push_back(y);
		if(undir){
			m[y]->nbrs.push_back(x);
		}
	}

	void print(){
		for(auto cityPair:m){
			auto city=cityPair.first;
			Node *node=cityPair.second;
			cout<<city<<"-> ";
			for(auto nbrs : node->nbrs){
				cout<<nbrs<<" ";
			}
			cout<<endl;
		}
	}
	/*lundon-> 
delhi-> lundon paris 
paris-> newyork 
newyork-> lundon 
*/


};


int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	vector<string> s={"newyork","paris","delhi","lundon"};
	Graph g(s);
	g.addEdge("delhi","lundon");
	g.addEdge("delhi","paris");
	g.addEdge("paris","newyork");
	g.addEdge("newyork","lundon");

	g.print();

}
