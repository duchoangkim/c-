#include<iostream>
using namespace std;


class Stack{
	public:
		int sizeStack;
		int top;
		int stack[100];
		
		Stack(int size){
			this->sizeStack = size;
			this->top = -1;
		}
		
		Stack(){
			this->sizeStack = 0;
			this->top = -1;
		}
		
		bool  isFull(){
			if(top >= this->sizeStack - 1) return true;
        	else return false;
        }
        
        bool empty(){
        	if(this->top < 0) return true;
        	else return false;
		}
		
		int push(int item){
			// them phan tu vao cuoi mang
			
			if(this->isFull()) {
				cout << "stack day" << endl;
				return 0;
			}
			
			this->stack[top + 1]= item;
			this->top++;
			
			return item;
		}
		
		int pop(){
			
			if(this->empty()) {
				cout <<" stack rong" << endl;
				return 0;
			}
			int item = this->stack[top];
			
			this->stack[top] = 0;
			this->top--;
			return item;	
		}
		void showStack(){
			cout <<"stack: " <<endl;
			for (int i = 0; i < this->sizeStack; i++){
				cout << this->stack[i] <<'\t';
			}
			cout << endl;
		}
};
int main(){
	Stack stack(5);
	cout <<"empty" << stack.isFull() << endl;
	stack.push(1);
	stack.push(2);
	stack.push(3);
	stack.push(1);
	stack.push(1);
	stack.push(1);
	stack.showStack();
	
	int top = stack.pop();
	cout << "top: " << top;
	
}

