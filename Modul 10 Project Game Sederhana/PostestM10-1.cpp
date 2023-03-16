#include <iostream>
#include <conio.h>
#include <cstdlib>
using namespace std;

int main(){
	string tebak;
	
	cout<<"======Selamat Datang di Tebak Kata======"<<endl;
	cout<<"Tekan Enter Untuk Mulai!"<<endl;
	getch();
	system("cls");
	
	cout<<"======Selamat Datang di Tebak Kata======"<<endl;
	cout<<"LEVEL 1"<<endl;
	cout<<"Sesuatu yang tidak bisa di sentuh namun bisa di dengar. Biasanya dengan kata-kata yang indah dan penuh perasaan."<<endl;
	cout<<endl<<"L _ _ _ "<<endl;
	for(int i = 0; i <= 3; i++){
		cout<<"Masukan Tebakan Anda : ";
		cin>>tebak;
		if(tebak == "lagu" || tebak == "Lagu"){
			cout<<"Tebakan Anda Benar!"<<endl;
			getch();
			break;
		}else{
			cout<<"Tebakan Anda Salah!"<<endl;
		} 
	}
	system("cls");
	
	cout<<"======Selamat Datang di Tebak Kata======"<<endl;
	cout<<"LEVEL 2"<<endl;
	cout<<"Makanan khas Kuningan yang biasa memakai kemasan ember sebagai oleh-oleh."<<endl;
	cout<<endl<<"_ A _ _ _"<<endl;
	for(int i = 0; i <= 3; i++){
		cout<<"Masukan Tebakan Anda : ";
		cin>>tebak;
		if(tebak == "tape" || tebak == "Tape"){
			cout<<"Tebakan Anda Benar!"<<endl;
			getch();
			break;
		}else{
			cout<<"Tebakan Anda Salah!"<<endl;
		} 
	}
	system("cls");
	
	cout<<endl<<"=====Terimakasih Telah Bermain!====="<<endl;
}
