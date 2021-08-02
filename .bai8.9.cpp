#include<iostream>
using namespace std;
int main(){
int A[100][100];
int n;
int max;
int min;
int s=0;
int t=1;
int tmp;
int i;
int j;
cout<<"nhap n:";
cin>>n;
for(i=0;i<n;i++){
	for(j=0;j<n;j++){
		cout<<"A["<<i<<"]"<<"["<<j<<"]"<<endl;
		cin>>A[i][j];
	}
}
for(i=0;i<<n;i++){
	for(j=0;j<n;j++){
		s=s+A[i][j];
		cout<<s;	
	}
}

}
