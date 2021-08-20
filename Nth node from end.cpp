#include <iostream>
using namespace std;

class node{
	public:
	int data;
	node *next;
};

node *head;

void insert(int x){
	node *new_node= new node();
	new_node->data=x;
	new_node->next=NULL;
	
	if(head==NULL){
		head=new_node;
	}
	else{
		node *ptr=head;
		
		while(ptr->next!=NULL){
			ptr=ptr->next;
		}
		ptr->next=new_node;
	}
}
int countNode(){
	node *ptr=head;
	int count=0;
	while(ptr!=NULL){
		count++;
		ptr=ptr->next;
	}
	return count;
}

void print_Nthnode_end(int N){
	node *ptr=head;
	int n=countNode();
	if(N>n){
		cout<<-1;
	}
	else{
	
    	int pos_start=n-N+1;
	
	    for(int i=1; i!=pos_start;i++){
	      	ptr=ptr->next;
	   }
    	cout<<ptr->data;
}
}


void display(){
	node *ptr=head;
	while(ptr!=NULL){
		cout<<"->"<<ptr->data;
		ptr=ptr->next;
	}
	cout<<endl;
}



int main(){
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	insert(6);
	
	display();
	
	print_Nthnode_end(2);
	
	return 0;
}
