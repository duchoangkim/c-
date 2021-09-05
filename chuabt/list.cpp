#include<iostream>
using namespace std;

struct Node {
	int data;
	Node* next = NULL;
	};
	
struct List {
	Node * head=NULL;
	Node * tail=NULL;
};

void addNode( List &ls, Node *node){ 
	if(ls.head == NULL)
		{ 
			ls.head = node;
		   ls.tail = node;
		}
	else
	 	{  node->next = ls.head;
		    ls.head = node;
		}
}

void pushNode(List &ls, Node *node){
	if(ls.head == NULL)
		{ 
			ls.head = node;
			ls.tail = node;
		}
	else
	 	{  
			ls.tail->next = node;
			ls.tail = node;
		}
}
int deleteNode( List &ls){ // xoa phan tu dau tien
	if( ls.head != NULL){
		ls.head = ls.head->next;
		return 1;
	}
	
	return 0;
}


int deleteNode2( List &ls, int n /* so node can xoa*/){
}


void printList(List ls){
	Node * node = ls.head;
	while( node != NULL){
	 	cout << node->data<< endl;
	 	node = node->next;
	}
}



int main(){
	Node n1, n2, n3;
	List queue;
	
	
	
	n1.data = 1;

	n2.data = 2;

	n3.data = 3;

	addNode(ls, &n1);
	addNode(ls, &n2);
	deleteNode(ls);
	deleteNode(ls);
	printList(ls);
	
	
	
	
	
	
	
	
	
	
	
	
}

