#include<iostream>
using namespace std;

void check(int number){
	int bandau = number;
	int nghichdao =0;
	while(number > 0){
		int chuso = number%10;
		nghichdao = nghichdao*10 + chuso;
		number /= 10;
		cout << chuso << endl;
	}
	
	if(nghichdao == bandau){
		cout <<"day la so palindromic "<< endl;
	}
	else{
		cout << nghichdao<< endl;
	}
}

int main(){
	int number;
	do{
		cout << "Nhap: " ; cin >> number;
		check(number);
	}
	while(number > 0);
}

