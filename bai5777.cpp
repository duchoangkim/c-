#include<iostream>
using namespace std;
class matran{
	int sohang;
	int socot;
	float arr[100][100];
	public:
	void tao(){
	int i;
	int j;
	cout<<"nhap so hang:";
	cin>>this->sohang;
	cout<<"nhap so cot:";
	cin>>this->socot;
	for(i=1;i<=sohang;i++){
	 for(j=1;j<=socot;j++){
	cout<<"arr["<<i<<"]"<<"["<<j<<"]";
	cin>>this->arr[i][j];
		}
	}
		
	}
	void inmatran(){
	int i;
	int j;
	cout<<"ma tran\t"<<endl;
	for(i=1;i<=this->sohang;i++){
		for(j=1;j<=this->socot;j++){
			cout<<this->arr[i][j]<<"\t";
			if(j%socot==0) cout<<endl;
		}
	}
	}
	matran operator *(matran b ){
		int i;
		int j;
		int h;
		int k;
		 matran c;

		for(k=1;k<=this->sohang;k++){
			  for(h=1;h<=this->socot;h++){
		           for(i=1;i<=this->sohang;i++){
			               for(j=1;j<=this->socot;j++){
                            c.arr[i][j]=this->arr[i][h]*b.arr[j][k];
                        } 
                     }
			
				     }
			  
				    }
				     
				    return c;
				 }
};
int main(){
matran a;
matran b;
matran c;
a.tao();
a.inmatran();
b.tao();
b.inmatran();
c=a*b;
c.inmatran();
}
