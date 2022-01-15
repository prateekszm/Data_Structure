#include <bits/stdc++.h>
using namespace std;
class car{
public:
	int x,y;
	string id;
	car(string id, int x, int y){
		this->id=id;
		this->x=x;
		this->y=y;
	}
	int distance() const{
		return x*x + y*y; //square of root
	}
};
class carCompare{
public:
	bool operator()(const car A,const car B){
		return A.distance() < B.distance(); //max heap
	}
};
bool distancCompare(car a,car b){
	return a.distance() > b.distance();
}
void printNearestCar(vector<car>cars,int k){
	priority_queue<car,vector<car>,carCompare> max_heap(cars.begin(),cars.begin()+k);
	//insert remaning car in heap
	for(int i=k;i<cars.size();i++){
		auto Car=cars[i];
		if(Car.distance() <  max_heap.top().distance()){
			max_heap.pop(); // remove the node that is largest
			max_heap.push(Car); //push the current node and arrange them
		}
	}

	vector<car> output;
	while(!max_heap.empty()){
		// cout<<max_heap.top().id<<endl;
		output.push_back(max_heap.top());
		max_heap.pop();
	}
	//now we have vector of k smallest car
	sort(output.begin(),output.end(),distancCompare);

	// Even we can reverse the vector
	for(auto x:output){
		cout<<x.id<<endl;
	}

	return;
};

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	int N,K;
	string id;
	cin>>N>>K;
	int x,y;
	vector<car> cars;
	for(int i=0;i<N;i++){
		cin>>id>>x>>y;
		car Car(id,x,y);
		cars.push_back(Car);
	}
	printNearestCar(cars,K);

}


/* These are input files

5 3
c1 1 1
c2 2 1
c3 3 2
c4 0 1
c5 2 3
*/