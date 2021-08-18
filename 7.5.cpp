#include<iostream>
using namespace std;
int main(){
int n;
int i;
do{
cout<<"Nhap so n  ";
cin>>n;}
while(n<0);
int GiaiThua=1;
if(n>0) {
 for(i=n;i>=1;i--){
 GiaiThua=GiaiThua*i;}}
cout<<n<<"!=  "<<GiaiThua<<endl;

}
   
   
