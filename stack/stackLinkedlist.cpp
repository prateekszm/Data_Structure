#include <bits/stdc++.h>
using namespace std;
#include"Stack.h"


/*Main code start here*/
int main(){
	// #ifndef ONLINE_JUDGE
	// 	freopen("input.txt","r",stdin);
	// 	freopen("output.txt","w",stdout);
	// #endif
	Stack s(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	s.push(6);
	s.pop();
	s.display();
	cout<<"TOP ELEMENT "<<s.peek()<<endl;
	cout<<"SIZE "<<s.Size()<<endl;
}



















