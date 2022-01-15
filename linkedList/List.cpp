#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
};

class List{
    private:
    node *head;
    public:
    List(){head=NULL;}
    List(int data);
    void display();
    int length();
    void append(int data);
    void insertAtIndex(int index,int data);
    int deleteAtIndex(int index);
    int deleteGivenData(int data);
    // void addEntireArray(int arr[],int size);
    bool search(int data);
    void insertInSortedList(int data);
    bool improvedSearch(int data);
    bool isSorted(); 
    void removeDup();
    void reverse();
    ~List();
};
void List::reverse(){
    node *p,*q,*r=head;
    p=q=NULL;
    while(r!=NULL){
        p=q;
        q=r;
        r=r->next;
        q->next=p;
    }
    head=q;
    
}

void List::removeDup(){
    node *ptr=head->next;
    node  *q=head;
    while (ptr!=NULL)
    {
        if(ptr->data==q->data){
            q->next=ptr->next;
            delete ptr;
            ptr=q->next;
        }else{
            q=ptr;
            ptr=ptr->next;
        }

    }
    
}
bool List::isSorted(){
    node *ptr=head;
    int x = INT_MIN;
    while (ptr){
        if(ptr->data>x){
            x=ptr->data;
        }else{
            return 0;
        }
        ptr=ptr->next;
    }
    return true;
    
    
}
void List::insertInSortedList(int data){
    node *ptr=head;
    node *q;
    node *temp=new node;
    temp->data=data;
    temp->next=NULL;
    if(head->data>data){
        temp->next=head;
        head=temp;
        return;
    }
    while (ptr && ptr->data<data)
    {     
        q=ptr;
        ptr=ptr->next;
    }
     q->next=temp;
     temp->next=ptr; 
    
}
 
List::~List(){
    node *p=head;
    while (head)
    {
        head=head->next;
        delete p;
        p=head;
    }
}
List::List(int data){
    //if(head==NULL)
        node *temp=new node;
        head= temp;
        temp->data = data;
        temp->next=NULL;
}
bool List::search(int data){
    node *ptr=head;
    while(ptr){
        if(ptr->data==data){
            return true;
        }
        ptr=ptr->next;
    }
    return 0;
}
bool List::improvedSearch(int data){
    node *ptr=head;
    node *q=head;
    while(ptr){ 
        if(ptr->data==data){
            q->next=ptr->next;
            ptr->next=head;
            head=ptr;
            return true;
        }
        q=ptr;
        ptr=ptr->next;
    }
    return 0;
}

int List::deleteGivenData(int data){
    node *ptr,*q;
    ptr=head;

    //Element found on head
    if(head->data==data){
        head=head->next;
        delete ptr;
        return head->data;

    }
    // Elenent not found on head and we have to search that
    while(ptr){

        if(ptr->data==data){
            q->next=ptr->next;
            int x=ptr->data;
            delete ptr;
            return x;
            
        }
        q=ptr;
        ptr=ptr->next;

    }
    return -1;


}
void List::append(int data){
    if(head==NULL){
        cout<<"bro add data first "<<endl;
    }else{
        node *ptr;
        ptr=head;
        while (ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        node *temp=new node;
        ptr->next=temp;
        temp->data=data;
        temp->next=NULL;
        ptr=temp;
    }
}
int List::length(){
    int count=0;
    node *ptr=head;
    while (ptr)
    {
        count++;
        ptr=ptr->next;
    }
    return count;
}
void List::insertAtIndex(int index ,int data ){
    node *ptr=head;
    node *temp=new node;
    temp->data=data;
    temp->next=NULL;

    if(index<0&&index>length()){
        cout<<"Invalid index may be less than zero or more than length"<<endl;
        return;
    }
    if(index==0){
        temp->next=head;
        head=temp;
    }else{
        for(int i=1;i<index-1;i++){
         ptr=ptr->next;
        }
        temp->next=ptr->next;
        ptr->next=temp;
    } 
}
int List::deleteAtIndex(int index){
    node *ptr,*q=NULL;
    if(index<0&&index>length()){
        return -1;
    }
    if(index==1){
        ptr=head;
        head=head->next;
        int x=ptr->data;
        delete ptr;
        return x;
    }else{
        ptr=head;
        for(int i=0;i<index-1;i++){
            q=ptr;
            ptr=ptr->next;
        }
        q->next=ptr->next;
        int x=ptr->data;
        delete ptr;
        return x;
    }
    return -1;

}
void List::display(){
    node *ptr=head;
    while(ptr){
        cout<<ptr->data<<" -> ";
        ptr=ptr->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    List l1(8);
    l1.append(9);
    l1.append(10);
    l1.append(11);
    l1.append(11);
    l1.append(11);
    l1.append(13);
    l1.display();
    cout<<endl;
    // cout<<l1.length();
    // cout<<endl;
    // l1.insertAtIndex(4,8);
    // l1.display();
    // cout<<endl;
    // cout<<l1.length();
    // cout<<endl;
    // cout<<"Deleted element: "<<l1.deleteAtIndex(4);
    // cout<<endl;
    // cout<<l1.length();
    // cout<<"Deleted element: "<<l1.deleteGivenData(9);
    // cout<<endl;
    // cout<<l1.search(9);
    // cout<<endl;
    // cout<<l1.improvedSearch(9);
    // cout<<endl;
    // l1.insertInSortedList(12);
    // cout<<endl;
    // cout<<l1.isSorted();
    l1.removeDup();
    cout<<endl;
    l1.reverse();
    l1.display();

    return 0;
}
