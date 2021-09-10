#include<iostream>
#include<stack>
#include<string>
using namespace std;

string to_string( int n){
	string  str ="";
	char a = (char)(n+48);
	str.push_back(a);
	return str;
}

string convert(int n){
	if( n < 10) return to_string(n);
		
	switch(n){
		case 10: return "A";
		case 11: return "B";
		case 12: return "C";
		case 13: return "D";
		case 14: return "E";
		case 15: return "F";
	}
}

int main(){
	stack<int> myStack;
	int number, n;
	do{	
		string hex;
		cout <<"nhap vao he so 10" << endl;
		cin >> number;
		n = number;
		while(number > 0 ){
			int d = number %16;
			myStack.push(d);
			number = number/16;
		}
		
		while(!myStack.empty()){
			int d = myStack.top();
			myStack.pop();
			hex+= convert(d);
		}
		if(n > 0) cout <<"co so 16 la: "<<  hex<< endl;
	}while(n > 0);
}

