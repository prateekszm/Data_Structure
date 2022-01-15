#include <iostream>
#include <stack>
using namespace std;
 

// Recursive function to insert an item x in sorted way
void sortedInsert(stack<int>&st, int x)
{
    // Base case: Either stack is empty or newly inserted
    // item is greater than top (more than all existing)
    if (st.empty() || x > st.top()) {
        st.push(x);
        return;
    }
 
    // If top is greater, remove the top item and recur
    int temp = st.top();st.pop();
    sortedInsert(st, x);
 
    // Put back the top item removed earlier
    st.push(temp);
}
 
// Function to sort stack
void sortStack( stack<int>&st)
{
    // If stack is not empty
    if (!st.empty()) {
        // Remove the top item
           x = st.top();st.pop();
 
        // Sort remaining stack
        sortStack(st);
 
        // Push the top item back in sorted stack
        sortedInsert(st, x);
    }
}
 

int main(void)
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    stack<int> st;
    st.push(3); 
    st.push(69); 
    st.push(33); 
    st.push(19); 
    st.push(-6); 
    st.push(9); 
    sortStack(st);
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }

    return 0;
}
 