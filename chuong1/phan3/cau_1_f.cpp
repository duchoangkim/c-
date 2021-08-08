#include<iostream>
using namespace std;

int main(){
	
	int A[100] = {0, 1, 2, 3, 4, 5, 6 ,7 ,8, 9};
	
	
 p = 5 ; // vi tri xoa
	int k = 3 ; // vi tri chen
	// xoa phan tu cua mang
	for ( int i = p; i < 10 - 1  ; i++){
		A[i] = A[i + 1];
	}
	// in mang vua xoa
	for ( int i = 0; i < 9; i++){
		cout << A[i] << "\t";
	}
	cout << endl;
	// chen them phan tu
	for (int i = 9; i >= k; i-- ){
		A[i+1] = A[i];
	} 
	A[k] = 100;
	// in ra mang vua chen
	for ( int i = 0; i < 10; i++){
		cout << A[i] << "\t";
	}
	
	
}

