#include<iostream>
#include <fstream>
using namespace std;

int main(){
	
	// nhap ten file -> luu vao bien string
//	char startFile[100], finishFile[100];
//	
//	cout << " nhap ten file nguon:"<< endl;
//	fflush(stdin);
//	cin.getline(startFile,100);
//	cout << " nhap ten file dich:"<< endl;
//	fflush(stdin);
//	cin.getline(finishFile,100);
	// mo file
	fstream start, finish;
	
	start.open("nguon.txt",ios::in);
	finish.open("dich.txt",ios::app); 
	
	// kiem tra file co ton tai khong 
	if(start.fail()) {
		cout << " khong ton tai file nguon" << endl;
		return 0;
	}
	if(finish.fail()) {
		cout << " khong ton tai file dich" << endl;
		return 0;
	}
	
	//
	string data;
	string line;
	
	while (!start.eof())     
	{
		getline(start, line); 
		data +=(line + "\n");
	}
	cout << data<< endl;
	finish << data;
	//dong file
	start.close();
	finish.close();
	
	


}

