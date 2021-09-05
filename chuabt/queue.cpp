#include<iostream>
using namespace std;

struct Node {
	int data;
	Node* next = NULL;
	};
	
struct Queue {
	Node * front=NULL;
	Node * rear=NULL;
};

bool empty(Queue &q){
	if(q.front == NULL && q.rear == NULL) return true;
	return false;
}

bool isFull(Queue &q, int size){
	if (q.front != NULL)
	{	int dem = 0;
		Node* node = q.front;
		while (node != NULL)
		{
			dem++;
			node = node->next;
		}
		
		if( dem >= size) return true;
	}
	
	return false;
}

int push(Queue &q, Node *p, int size){
	if( isFull(q, size)) {
		cout <<" queue da day"<< endl;
		return 0;
	}
	if(q.front == NULL)
		{ 
			q.front = p;
			q.rear = p;
		}
	else
	 	{  
			q.rear->next = p;
			q.rear = p;
		}
}

int pop(Queue &q){
	//lay phan tu o dau danh sach
	if(q.front == NULL) {
	cout << "queue rong"<< endl;
	return 0;}
	Node* p = q.front;
	q.front = q.front->next;
	return p->data;
}

int seek(Queue &q){
	// lay phan tu o dau queue nhung khong xoa

}

void showQueue(Queue &q){
	
	Node* node = q.front;
	while (node != NULL)
	{
		cout << node->data << "\t";
		node = node->next;
	}
}



int main(){
	
	Queue q;
	Node n; n.data=3;
	Node n2; n2.data=2;
	Node n3; n3.data=1;
	push(q, &n, 3);
	push(q, &n2, 3);
	push(q, &n3, 3);

	showQueue(q);
	
	int top = pop(q);
	top = pop(q);
	top = pop(q);
	top = pop(q);
	showQueue(q);

}

