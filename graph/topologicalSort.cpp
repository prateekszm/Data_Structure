//Graph AdjList
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
	void addEdge(int x,int y, bool unidir=false){
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

	void topological_sort(int source){
		//1 calculate the indegree of the node
		vector<int> indegree(n,0);
		for(int i=0;i<n;i++){
			for(auto x:l[i]){
				indegree[x]++;
			}
		}
		//bfs 
		queue<int> q;
		//initilize the queue which have 0 digree
		for(int i=0;i<n;i++){
			if(indegree[i]==0){
				q.push(i);
			}
		}

		//start poping
		while(!q.empty()){
			int node=q.front();
			cout<<node<<" ,";
			q.pop();

			//iterate over the nebigour and reduce the dactor 1
			for(auto nbr:l[node]){
				indegree[nbr]--;
				if(indegree[nbr]==0){
					q.push(nbr);
				}
			}
		}

	}

	
	
};
//O(V + E) = o^2
int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	Graph h(6);
	h.addEdge(0,2);
	h.addEdge(1,2);
	h.addEdge(1,4);
	h.addEdge(2,3);
	h.addEdge(3,5);
	h.addEdge(4,5);
	

	h.printgraph();
	cout<<endl;

	h.topological_sort(1);


}
