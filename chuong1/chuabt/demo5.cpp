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
 	
 	
 	// neu tim thay thi tra ve sinh vien day luon
 	
 	
 	// neu khong tim thay thi tra ve sinh vien rong.
	 
	 	
	}
};

int main(){
	Lop a1("A1",5);
	a1.nhap();
	a1.xuat();
	
	sinhvien sv1("nguyen van A", 2);
	a1.add(sv1);
	
	cout << "Sau khi add" << endl;
	
	a1.xuat();

}
