#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
};

class List{
    private:
    node *head,*last;
    public:
    List(){head=NULL;}
    List(int data);
    void display();
    void add(int data);
    void addEntireArray(int arr[],int size);
};

List::List(int x){
    // node *temp;
    if(head==NULL){
        head=new node;
        head->data=x;
        head->next=NULL;
        last=head;
    }
    // temp=new node;
    // temp->data=x;
    // temp->next=NULL;
    // last=temp;
    // last->next=NULL;

}
void List::add(int data){
    node *ptr;
    node *temp=new node;
    temp->data=data;
    temp->next=NULL;


    ptr=head;

    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=temp;
    ptr=ptr->next;

    

}
void List::addEntireArray(int arr[],int size){
    node *ptr;
    ptr=head;
    if(head==NULL){
        node *temp;
        temp=new node;
        head=temp;
        // ptr->next=temp;
        temp->data=arr[0];
        temp->next=NULL;
        ptr=temp;
        for(int i=1;i<size;i++){
            node *temp=new node;
            temp->data=arr[i];
            temp->next=NULL;
            ptr->next=temp;
            ptr=temp;
        }
    }
}

void List::display(){
    node *temp=head;
    while (temp)
    {
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
    
}

int main(){
    List c(5);
    int arr[]{1,2,3,4,5};
    c.add(5);
    c.add(9);
    c.add(7);
    c.add(8);
    c.add(69);
    c.add(899);
    c.add(84);
    // c.addEntireArray(arr,5);
    c.display();
}