#include <iostream>
#include <cstdlib>
using namespace std;

int matriks_1[2][2];
int matriks_2[2][2];
int matriks_hasil[2][2];
char pilih;

int input_user(int matrik_1[2][2], int matriks_2[2][2]){
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			cout<<"Masukan Matriks kolom "<<i+1<<" baris "<<j+1<<" : ";
			cin>>matriks_1[i][j];
		}
	}
	cout<<endl<<"Matriks Pertama adalah :"<<endl;
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			cout<<matriks_1[i][j];
		}
		cout<<endl;
	}
	
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
		cout<<"Masukan Matriks kolom "<<i+1<<" baris "<<j+1<<" : ";
		cin>>matriks_2[i][j];
		}
	}
	cout<<endl<<"Matriks Kedua adalah :"<<endl;
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			cout<<matriks_2[i][j];
		}
		cout<<endl;
	}
}

int tambah(int matriks_1[2][2], int matriks_2[2][2]){
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			matriks_hasil[i][j] = matriks_1[i][j] + matriks_2[i][j];
		}
	}
}
int kurang(int matriks_1[2][2], int matriks_2[2][2]){
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			matriks_hasil[i][j] = matriks_1[i][j] - matriks_2[i][j];
		}
	}
}

int main(){
	start:
		cout<<"=====SELAMAT DATANG DI OPERASI MATRIKS====="<<endl;
		cout<<"1. Penjumlahan \t\t 2. Pengurangan"<<endl;
		cout<<"Pilih Operasi apa yang akan di lakukan? ";
		cin>>pilih;
	
		input_user(matriks_1, matriks_2);
	
		if(pilih == '1'){
			cout<<endl<<"Hasil Operasi Penambahan kedua Matriks Tersebut adalah :"<<endl;
			tambah(matriks_1, matriks_2);
		}else{
			cout<<endl<<"Hasil Operasi Pengurangan kedua Matriks Tersebut adalah :"<<endl;
			kurang(matriks_1, matriks_2);
		}
	
		for(int i = 0; i < 2; i++){
			for(int j = 0; j < 2; j++){
				cout<<matriks_hasil[i][j];
			}
			cout<<endl;
		}
		
		cout<<"Ingin melanjutkan(y/n)? ";
		cin>>pilih;
	if(pilih == 'y' || pilih == 'Y'){
		system("cls");
		goto start;
	}else{
		cout<<endl<<"=====Terimakasih=====";
	}
}
