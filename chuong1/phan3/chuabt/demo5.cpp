#include<iostream>
using namespace std;
class sinhvien{  // dai dien cho 1 sinh vien 
	public:
	  string hovaten;
	  int masinhvien;
	  int somon;
	  float diemtungmon[100];
	  float dtb;
	  sinhvien(){
	
	  }
	  
	  sinhvien(string hovaten, int ma){
	  	this->hovaten = hovaten;
	  	masinhvien = ma;
	  }
	  void nhap(){
	  		this->hovaten = "nguyen van B";
	  		this->masinhvien = 1234;
	  }

	void sodiem(){
		int i;
		for(i=1;i<=this->somon;i++){
			cout<<"nhap bang diem";
			cin>>this->diemtungmon[i];
		}
	}  
	void tinhdiemtrungbinh(){
		int i;
		float s = 0;
		for(i=1;i<=this->somon;i++){
			s += this->diemtungmon[i];
		}
		this->dtb = s/this->somon;
	}
	void xuatsv(){
		cout <<this->masinhvien << "\t" <<this->hovaten <<  endl;
	}
};


class Lop{

	public:
	string tenlop;
	int so_sinh_vien; //~ n ; p
	sinhvien sv[100]; // phan tu cuoi cung sv[n-1]
	Lop(){
		
	}
	Lop(string tenlop, int so_sinh_vien){
		this->tenlop = tenlop;
		this->so_sinh_vien = so_sinh_vien;
	}
	void nhap(){
		if( this->tenlop == "" ){
			cout<<"nhap ten lop la:";
			cin>>this->tenlop;
		}
		if( this->so_sinh_vien == 0){
			cout<<"nhap so sinh vien cua lop:";
			cin>>this->so_sinh_vien;
		}
	
		for( int i = 0; i < this->so_sinh_vien; i++){
			this->sv[i].nhap();		
		}
		
	}
	
	void xuat(){
		cout << "Danh sach lop " << this->tenlop << endl;
		for(int i; i < this->so_sinh_vien; i++){
			this->sv[i].xuatsv();
		}
	}
    void add(sinhvien sv1){
    	// them sv1 vao cuoi mang
    	this->sv[this->so_sinh_vien] = sv1;
    	// tang so sinh vien trong danh sach len 1 don vi.
    	this->so_sinh_vien++;
    	
 	}
 	
 	// viet ham tim kiem sinh vien theo ma so sinh vien.
 	
 	sinhvien findByMssv(int mssv){
 	// duyet qua tat ca cac phan tu
 	for( int i = 0; i < this->so_sinh_vien; i++){
 		// neu tim thay thi tra ve sinh vien day luon
		 if( this->sv[i].masinhvien == mssv){
			return this->sv[i];
 			
	 	}
	}
	
	sinhvien a;
	a.masinhvien = 0;
	return a;

	 	
	}
};

int main(){
	Lop a1("A1", 5);
	a1.nhap();
	a1.xuat() ;
	
	cout << "finding...." << endl;
	sinhvien sv1 = a1.findByMssv(1234);
	if(sv1.masinhvien == 0){
		cout << " khong tim thay sinh vien" << endl;
		
	}
	else{
		cout << " da tim thay sinh vien" << endl;
		sv1.xuatsv();
	}
	
}
