#include<iostream>
using namespace std;
struct Db{
	char tdt[100];
	char cqct[100];
	char cv[100];
	long int sdt;
	long int sdtcq;
	char dc[100] ;
	char dccq[100];
	char email[100];
	};
void nhap(Db db[], int n){
	for(int i=0;i<n;i++){
		cout<<"tdt:"<<i<<":";
		cin.getline(db[i].tdt,100);
		
		cout<<"cqct:"<<i<<":";
		cin.getline(db[i].cqct,100);
//		
//		cout<<"cv:"<<i<<":";
//		cin.getline(db[i].cv,100);
//		
//		cout<<"sdt:";
//		cin>>db[i].sdt;
//		
//		cout<<"sdtcq:"<<i<<":";
//		cin>>db[i].sdtcq;
//		
//		cout<<"dc:"<<i<<":";
//		cin.getline(db[i].dc,100);
//		
//		cout<<"dccq:"<<i<<":";
//		cin.getline(db[i].dccq,100);
//		
//		cout<<"email:"<<":";
//		cin.getline(db[i].email,100);
	}
}
void xuat(Db *db,int n){
	int i;
	
	// in cac title cua tung cot
	
	cout << "tdt\t" << "cqct\t" <<"cv:\t" << "sdt:\t" <<"sdtcq:\t" <<"dc:\t"
	<<"dccq:\t"<<"email\t" << endl;
	for(i=0;i<n;i++){
		cout << db[i].tdt <<"\t" << "cqct\t" <<"cv:\t" << "sdt:\t" <<"sdtcq:\t" <<"dc:\t"
	<<"dccq:\t"<<"email\t" << endl;			
}	
}


bool tim_kiem(Db D[], int n ){
	string ten, coquan;
	cout <<"nhap vao ten va co quan"<< endl;
	fflush(stdin);
	getline(cin, ten);
	fflush(stdin);
	getline(cin,coquan);
	
	for( int i = 0;  i< n; i++){
		if(ten !="" && coquan !=""){
			if(D[i].tdt == ten && D[i].cqct == coquan) {
			cout << D[i].tdt<< endl;
			}
		}
		else{
			if(ten!=""){
				if(D[i].tdt == ten ) {
					cout << D[i].tdt<< endl;
				}
			}
			else{
				if( D[i].cqct == coquan) {
					cout << D[i].tdt<< endl;
				}
			}
		}
		
		
		
	}
	
}
int main(){
Db db[100];
int n;
int i;
int j;
n = 3;
string str1 ="nam" , str2 ="binh";

if( str1 < str2) cout << str1<< endl << str2;
else  cout << str2<< endl << str1;


//nhap(db, n);
//
//
//tim_kiem(db, n);
//xuat(db,n);
//do{
//	cout<<"nhap so nguoi trong db :";
//	cin>>n;
//}while(n<0||n>500);
//
//	nhap(db,n);


}
