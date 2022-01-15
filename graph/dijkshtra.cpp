//Graph AdjList
#include <bits/stdc++.h>
using namespace std;

class Graph{
	int n;
	list<pair<int,int>> *l;
public:
	Graph(int n){
		this->n=n;
		l=new list<pair<int,int>> [n];
	}
	void addEdge(int x,int y,int wt, bool unidir=true){
		l[x].push_back({wt,y});
		if(unidir){
			l[y].push_back({wt,x});
		}
	}

/*	void printgraph(){
		for(int i=0;i<n;i++){
			cout<<"virtices "<<i<<"->";
			for(auto x:l[i]){
				cout<<x<<",";
			}
			cout<<endl;
		}
	}*/

	int dijkstra(int src,int dest){
		//Data strucuture
		vector<int> dist(n,INT_MAX);
		set<pair<int,int>>s;


		//1. int
		dist[src]=0;
		s.insert({0,src});

		while(!s.empty()){
			auto it=s.begin();

			int node=it->second;
			int distTillNow= it->first;
			s.erase(it); //POP

			for(auto nbrsPair : l[node]){
				//iterating over 
				int nbr=nbrsPair.second;
				int currentEdge=nbrsPair.first;

				if(distTillNow + currentEdge <dist[nbr]){
					//remove if nbr already exist in a set

					auto f=s.find({dist[nbr],nbr});
					if(f!=s.end()){
						s.erase(f);
					}

					//insert the updated value with the new dist
					dist[nbr]=distTillNow+ currentEdge;
					s.insert({dist[nbr],nbr});
				}

			}

		}
		for(int i=0;i<n;i++){
			cout<<"Node  i "<<i<< " Dist  "<<dist[i]<<endl;
		}

		return dist[dest];

	}
	
	
};
//O(V + E) = o^2
int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	Graph h(5);
	h.addEdge(0,1,1);
	h.addEdge(1,2,2);
	h.addEdge(0,2,4);
	h.addEdge(0,3,7);
	h.addEdge(3,4,3);
	h.addEdge(3,2,2);
	

	int j=h.dijkstra(0,4);
	cout<<endl;
	cout<<j;




}
