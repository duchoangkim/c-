#include<iostream>
using namespace std;
class matran{
	private:
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
		void setMN(int m, int n){
			this->sohang = m;
			this->socot = n;
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
		int i, j, h, k;
		
	
	
		matran c;
		if(this->socot == b.sohang){
			
			int m = this->sohang;
			int p = b.socot;
			int n = this->socot; 
			c.setMN(m, p);
			
			for(i = 1; i <= m; i++ ){
				for ( k = 1; k <= p; k++){
					c.arr[i][k] = 0;
					for ( h = 1; h <= n ; h++){
						c.arr[i][k] = c.arr[i][k] + this->arr[i][h] * b.arr[h][k];
					}	
				}
			}
		}
		else{ 
			cout << "khong the nhan ma tran"<< endl;
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
