#include <bits/stdc++.h>
using namespace std;
class Stack{
private:
	queue<int> q1,q2;

public:
	void push(int data){
		if (!q1.empty()){
			q1.push(data);
		}else
			q2.push(data);
	}

	void pop(){
		if(q1.empty()){
			//copy emements from q2  to q1
			while(!q2.empty()){
				int front=q2.front();
				q2.pop();

				if(q2.empty()){
					break;
				}
				q1.push(front);
			}
		}else{
			//copy elements from q2 to q1
			while(!q1.empty()){
				int front=q1.front();
				q1.pop();

				if(q1.empty()){
					break;
				}
				q2.push(front);
			}
		}
	}

	int top(){
		if(q1.empty()){
			//copy emements from q2  to q1
			while(!q2.empty()){
				int front=q2.front();
				q2.pop();
				q1.push(front);
				if(q2.empty()){
					return front;
				}
			}
		}else{
			//copy elements from q2 to q1
			while(!q1.empty()){
				int front=q1.front();
				q1.pop();
				q2.push(front);
				if(q1.empty()){
					return front;
				}
			}
		}

	}	

	bool isEmpty(){
		return q1.empty() and q2.empty();
	}

	
};

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	Stack s1;
	s1.push(2);
	s1.push(3);
	s1.push(4);
	s1.push(5);
	s1.push(6);
	s1.push(7);
	s1.push(8);
	cout<<s1.top();
	s1.pop();
	s1.pop();
	s1.pop();
	while(!s1.isEmpty()){
		cout<<s1.top()<<" ";
		s1.pop();
	}


	// s1.top();


}
