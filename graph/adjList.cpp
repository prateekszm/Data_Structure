#include <bits/stdc++.h>
using namespace std;
class graph{
	int v;
	list<int> * l;
public:
	graph(int k){
		v=k;
		l=new list<int>[k];
	}

	void addEdge(int x,int y){
		l[x].push_back(y);
		l[y].push_back(x);

	}

	void printgraph(){
		for(int i=0;i<v;i++){
			cout<<"vertices are: "<<i <<"-> ";
			for(auto x:l[i]){
				cout<<x<<" ";
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
		graph g(4);
		g.addEdge(0,1);
		g.addEdge(0,2);
		g.addEdge(2,1);
		g.addEdge(2,2);

		g.printgraph();
	

}
