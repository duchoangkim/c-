#include<iostream>
#include<math.h>
using namespace std; 
int main(){
int n, i, j;
float A[100][100];
float t =0, tb,  cl, clmax , cld, max, min, maxd, maxt;
do{
    cout<<"Nhap so ngay:  ";
    cin>>n;
}  while(n<2||n>10);

for(i=0;i<n;i++){
    for(j=0;j<6;j++){
        cout<<" ngay ["<<i<<"]"<<"lan["<<j<<"]";
        cin>>A[i][j];
    }
}
//tinh tb nhiet do
max = -1000;
clmax= 0;
for(i=0;i<n;i++){
    t=0;
      for(j=0;j<6;j++){
          t=t+A[i][j];
      }
     tb=t/6;
     
     cout<<"tb["<<i<<"]"<<tb<<endl;
    
    if(max<tb){
    	maxd = i;
    	max=tb;
	} 
	cl = abs(A[i][0] - A[i][3]) ;
	
	if(clmax < cl){
    	clmax = cl;
    	cld = i;
	}
}

cout << "ngay " << maxd << " co nhiet do lon nhat la: " <<  max;
cout << " ngay" << cld << " co chenh lech lon nhat la:" << clmax;

}
