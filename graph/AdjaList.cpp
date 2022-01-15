#include <bits/stdc++.h>
using namespace std;
class Graph{
	list<int> *l1;
	int k;
	public:
	Graph(int k){
		this->k=k;
		l1=new list<int>[k];
	}
	void addEdge(int x,int y){
		l1[x].push_back(y);
		l1[y].push_back(x);
	}

	void printAdjList(){
		for(int i=0;i<k;i++){
			cout<<"Vertices "<< i <<"-> ";
			for(auto k:l1[i]){
				cout<<k<<"  ";
			}
			cout<<endl;
		}
	}

};

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
		Graph g(4);
		g.addEdge(0,1);
		g.addEdge(0,2);
		g.addEdge(2,3);
		g.addEdge(1,2);

		g.printAdjList();

	

}
