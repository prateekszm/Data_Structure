#include<bits/stdc++.h>
using namespace std;
/* node *last; */
class node{
public:
    int data;
    node *next;

};

class LinkedList{
    private: 
    node *first;
    public:
    LinkedList(){first=NULL;}
    LinkedList(int arr[],int n);
    ~LinkedList();
    void display();
    void insert(int index,int data);
    int Delete(int index);
    int length();

};

LinkedList::LinkedList(int arr[],int n){
    node *last,*temp;
    int i=0;
    /* creating first node */
    first=new node;
    first->data=arr[0];
    first->next=NULL;
    last=first;
    /* end of creation of first node */
    

    /* adding other node at end of first node */
    if(first->next==NULL){
        for (int i = 1; i < n; i++)
        {
            temp =new node;
            temp->data=arr[i];
            temp->next=NULL;
            last->next=temp;
            last=temp;
        }
        
    }

}
/* constructor for distroying data */
LinkedList::~LinkedList(){
    node *p=first;
    while (first)
    {
        first=first->next;
        delete p;
        p=first;
    }
}
void LinkedList::display(){
    node *temp=first;
    while (temp)
    {
        cout<<temp->data<<" -> ";
        temp=temp->next;

    }
    cout<<"NULL"<<endl;
    
}

int main(){
    int arr[]={1,3,4,5,6};
    LinkedList l (arr,5);
    l.display();
}