#include<bits/stdc++.h>
using namespace std;
// void clearfromMemory();
class node{
    public:
    int data;
    node *next;
};
class List
{
public:
    node *head;
public:
    List(){head=NULL;}
    List(int arr[],int size);
    // ~List();
    node * getHead();
    void display();
    void mergeedDisplay(node *head);
    node* mergeLinkedList(node *first,node *head2);
};
node* List::mergeLinkedList(node *first,node *second){
    node *third=NULL,*last=NULL;
   
    if(first->data<second->data){
        third=first;
        last=first;
        first=first->next;
        last->next=NULL;
    }else{
        third=second;
        last=second;
        second=second->next;
        last->next=NULL;
    }
    while (first!=NULL&&second!=NULL)
    {
        if(first->data<second->data){
            last->next=first;
            last=first;
            first=first->next;
            last->next=NULL;
        }else{
            last->next=second;
            last=second;
            last=second;
            second=second->next;
        }
    }
    if(first!=NULL){
        last->next=first;
    }else{
        last->next=second;
    }
    

    return third;
}
void List::mergeedDisplay(node *head){
    node *ptr=head;
    while (ptr!=NULL)       
    {
        cout<<ptr->data<<"->";
        ptr=ptr->next;
    }
    cout<<"NULL"<<endl;
    node *del=head;
    while (head)
    {
        head=head->next;
        delete del;
        del=head;
    }
    // clearfromMemory(head);
}
/* void clearfromMemory(node *head){
    node *ptr=head;
    while (head)
    {
        head=head->next;
        delete ptr;
        ptr=head;
    }
    
} */
node* List::getHead(){
    return head;
}

List::List(int arr[],int size)
{
    head=new node;
    head->data=arr[0];
    head->next=NULL;
    node *ptr=head;
    for(int i=1;i<size;i++){
        
        node *temp=new node;
        temp->data=arr[i];
        temp->next=NULL;
        ptr->next=temp;
        ptr=temp;
    }
}

/* List::~List()
{
    node *ptr=head;
    while (head)
    {
        head=head->next;
        delete ptr;
        ptr=head;
    }
    
} */
void List::display(){
    node *ptr=head;
    while (ptr!=NULL)       
    {
        cout<<ptr->data<<"->";
        ptr=ptr->next;
    }
    cout<<"NULL"<<endl;
    
}


int main(){
    int arr[]{1,3,5,7,9};
    List l(arr,5);
    l.display();
    cout<<endl;
    int arr2[]{2,4,6,8};
    List l2(arr2,4);
    l2.display();
    node *that=l.mergeLinkedList(l.head,l2.head);
    cout<<endl;
    l2.mergeedDisplay(that);
    //l2.mergeedDisplay(l2.head);

}