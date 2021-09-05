#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
class vt
 {
 	
	public:
	int i,n,m[100];
	void nhap();
	void in();
	vt cong( vt);
	int nhan(vt);
	int khoangcach(vt);
 };
  void vt::nhap()
   { 
   	 cout<<"moi ban nhap so chieu vector:";
   	 cin>>n;
   	 for(i=0;i<n;++i)
   		{
			cout<<"nhap phan tu thu "<<i<<":";
   	  		cin>>m[i];
		} 
   } 
  void vt::in()
   {
   	cout<<"a(";
   	for (i=0;i<n;++i)
   	 cout<<m[i]<<",";
   	 cout<<")";
   	 cout<<endl;
   }
   vt vt::cong(vt x)
    {	
    	if( n != x.n){
    		cout << " 2 vector khong cung chieu"<< endl;
    		return x;
		}
    	vt kq;
    	kq.n = n;
    	for(i=0;i<n;++i)
    	 {
 	    	kq.m[i]=m[i]+x.m[i];
 	    }
 	    cout<<"tong 2 vecto:";
 	    kq.in();
 	    return kq;
    }
    int vt::nhan
	(vt x)
     {
     	int kq=0;
     	 for(i=0;i<n;++i)
     	  {
  	     	kq=kq+m[i]*x.m[i];
  	     }
     	return kq;
     }
     int vt::khoangcach(vt x)
     {
     	int khoangcach=0;
     	 for(i=0;i<n;i++){
     	 	khoangcach=khoangcach+pow(m[i]-x.m[i],2);
     	 	}
     	 	khoangcach=sqrt(khoangcach);
     	 	return khoangcach;
}
int main(){
vt A;
vt B;
vt C;
A.nhap();
A.in();
B.nhap();

C=A.cong(B);
C.in();
cout<<"nhan tich vo huong 2 veto  "<<A.nhan(B)<<endl;
cout<<"khoang cach 2 vecto "<<A.khoangcach(B);
cout <<"\nc.n:"<< C.n << endl;



}
