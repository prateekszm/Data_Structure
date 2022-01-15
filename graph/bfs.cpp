#include <bits/stdc++.h>
using namespace std;

class Graph{
	int n;
	list<int> *l;
public:
	Graph(int n){
		this->n=n;
		l=new list<int> [n];
	}
	void addEdge(int x,int y, bool unidir=true){
		l[x].push_back(y);
		if(unidir){
			l[y].push_back(x);
		}
	}

	void printgraph(){
		for(int i=0;i<n;i++){
			cout<<"virtices "<<i<<"->";
			for(auto x:l[i]){
				cout<<x<<",";
			}
			cout<<endl;
		}
	}

	void bfs(int n){
		queue<int> q;
		bool *visited=new bool[n]{0};

		q.push(n);
		while(!q.empty()){
			int f=q.front();
			cout<<f<<" ,";
			visited[f]=true;
			q.pop();

			for(auto nbr : l[f]){
				if(!visited[nbr]){
					q.push(nbr);
					visited[nbr]=true;
				}
			}

		}
	}
	void dfsHepler(int node,bool *visited){
		visited[node]=true;
		cout<<node<<" ,";
		for(int nbr:l[node]){
			if(!visited[nbr]){
				dfsHepler(nbr,visited);
			}
		}
	}

	void dfs(int sourse){
		bool *visited=new bool[n]{0};
		dfsHepler(sourse,visited);
	}
};
//O(V + E) = o^2
int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	Graph h(7);
	h.addEdge(0,1);
	h.addEdge(1,2);
	h.addEdge(3,5);
	h.addEdge(5,6);
	h.addEdge(4,5);
	h.addEdge(2,3);
	h.addEdge(0,4);
	h.addEdge(3,4);

	h.printgraph();
	cout<<endl;

	h.dfs(1);


}
