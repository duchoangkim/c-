#include<iostream>
using namespace std;


class Subjects{
	public:
		string maMonHoc, Ten;
		int soTin;
		Subjects(){
			maMonHoc = "0001";
			soTin = 3;
			Ten = "Tieng Anh";
		}
};

class ClassSubjects{
	public:
		string maLop, tenLop, tenNhom;
		int thoiGianHoc; // so gio hoc
		Subjects monHoc;
		ClassSubjects(string ma){
			Subjects a;
			maLop = ma;
			thoiGianHoc = 2;
			monHoc= a;
		}
		ClassSubjects(){
			Subjects a;
			maLop = "demo";
			thoiGianHoc = 2;
			monHoc= a;
		}
};


class Student{
	public:
		string ma, ten, namHoc;
		int soMon;
		ClassSubjects C[100];
		
		Student(){
			ma = "1234";
			ten="Nguyen Van A";
			namHoc="20202";
			soMon = 0;
		}
		
		void addClass(ClassSubjects a){
			int soTin = this->tongSoTinChi();
			if( soTin >= 30) {
				cout << "Ban da vuot qua so tin chi cho phep" << endl;
			}
			else{
				this->soMon++;  // this-<somon = 4
				C[this->soMon - 1] = a; // C[3] = a
				
			}
		}
		
		int tongSoTinChi(){
			int tinChi = 0;
			for ( int i = 0; i < this->soMon; i++){
			tinChi += this->C[i].monHoc.soTin;
			}
			return tinChi;
		}
		
};



int main(){
	
	ClassSubjects lop1("Lop 1");
	ClassSubjects lop2("Lop 2");
	ClassSubjects lop3("Lop 3");
	ClassSubjects lop4("Lop 4");
	
	Student sv;
	// add 4 lop vao sinh vien
	sv.addClass(lop1);
	sv.addClass(lop2);
	sv.addClass(lop3);
	sv.addClass(lop4);
	sv.addClass(lop4);
	sv.addClass(lop1);
	sv.addClass(lop2);
	sv.addClass(lop3);
	sv.addClass(lop4);
	sv.addClass(lop4);
	sv.addClass(lop4);
	sv.addClass(lop4);
	sv.addClass(lop4);

	cout << sv.tongSoTinChi();
}

