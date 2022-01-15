#include<bits/stdc++.h>
using namespace std;
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
    void insert(int index,int data);
    int deleteAtIndex(int index);
};
int List::deleteAtIndex(int index){
    node* ptr=head; 
    node *del;
    if (index==0)
    {
        int x;
        node *del=head;
        while(ptr->next!=head){
            ptr=ptr->next;
        }
        x=head->data;
        head=head->next;
        ptr->next=head;
        delete del;
        return x;

    }else{
        for (int i = 1; i < index; ++i)
        {   
            del=ptr;
            ptr=ptr->next;
        }
        int xx=ptr->data;
        del->next=ptr->next;
        delete ptr;
        return xx;
        
    }
}
void List::insert(int index ,int data){
    node *ptr=head;
    node *temp=new node;
    temp->data=data;
    temp->next=NULL;
    if(index == 0){
        while (ptr->next!=head) 
        {
            ptr=ptr->next;
        }
        ptr->next=temp;
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
List::List(int arr[],int size){
    head=new node;
    head->data=arr[0];
    node *ptr=head;
    head->next=head;
    for(int i=1;i<size;i++){
        node *temp=new node;
        temp->data=arr[i];
        ptr->next=temp;
        temp->next=head;
        ptr=temp;
    }


}
void List::display(){
    node *ptr;
    ptr=head;
    do
    {
        cout<<ptr->data<<" -> ";
        ptr=ptr->next;
    } while (ptr!=head);
    cout<<"NULL"<<endl;
    
}
int main(){
    int arr[]{1,2,3,4,5};
    List l(arr,5);
    l.display();

    l.insert(0,9);
    l.display();
    l.deleteAtIndex(0);
    //l.deleteAtIndex(0);
    l.display();
    cout<<l.deleteAtIndex(5);
    l.display();



}