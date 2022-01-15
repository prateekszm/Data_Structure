class node{
public:
	node *next;
	int top;
	int data;
	
};
class Stack{
private:
	node *head;
	int size=0;
public:
	Stack(int n);
	void push(int data);
	void display();
	void pop();
	int peek();
	int Size();

};
Stack::Stack(int n){
	head=new node;
	head->data=n;
	head->next=NULL;
	// top=head;
	size++;
}
void Stack::push(int data){
	node* temp=new node;
	temp->next=NULL;
	temp->data=data;
	temp->next=head;
	head=temp;
	// top=head;
	size++;
}
int Stack::peek(){
	return head->data;
}
void Stack::pop(){
	node *top=head;
	head=head->next;
	delete top;
	top=head;
	size--;
}
void Stack::display(){
	node *ptr=head;
	while(ptr){
		cout<<ptr->data<<" <-";
		ptr=ptr->next;
	}
	cout<<"\n";
}
int Stack::Size(){
	return size;
}