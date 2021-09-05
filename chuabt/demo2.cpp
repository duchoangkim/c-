#include<iostream>
#include<math.h>
using namespace std;
void nhap_vector(int *M, int n){   // M[] ~ *M 
	int i;
	for ( i = 0; i < n; i++){
		cout << " nhap phan tu thu " << i <<" : ";
		cin >> M[i];
	}
}

void xuat_vector(int M[], int n){
	int i;
	for ( i = 0; i < n; i++){
		
		cout << M[i] <<"\t";
	}
	cout << endl;
}

int main(){
	int n ,i;
	
	cout << " nhap vao n: "<< endl;
	cin >> n;
	int A[100], B[100], C[100];
	nhap_vector(A,n);
	nhap_vector(B,n);
	int S = 0;
	float D = 0;
	for ( i = 0; i < n;i++){
		C[i] =A[i] +B[i];
		
		S = S + A[i]*B[i];
		
		D += (A[i]-B[i])*(A[i]-B[i]);
	}

	cout << "Tong 2 vector A va B la: ";
	xuat_vector(C, n);
	cout <<"Tich vo huong: " <<  S << endl;
	cout << " khoang cach: " << sqrt(D);

	
}

