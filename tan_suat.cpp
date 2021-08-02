#include<iostream>
using namespace std;

int main(){
	int A[] = { 1, 1, 2, 3,3,3,4,5,6,7};
	int i, j;
	int maxf = 1, max= A[0];
	int fi;
	cout  << "i" <<"\t" << "A[i]" << "\t" << "fi" << endl;
	for( i = 0; i < 10; i++){// A[i]  
		fi = 0;
		for(j = 0; j<10; j++){
			if( A[j] == A[i] ) fi++;
		}
		if(fi > maxf) {
			maxf = fi;
			max= A[i];
		}
		cout  << i <<"\t" << A[i] << "\t" << fi << endl;
	}
	
	cout << "Gia tri " << max << "\t Tan suat "<< maxf << endl;
	
}

