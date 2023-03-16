#include <iostream>
#include <cstdlib>
using namespace std;

int matriks_1[10][10];
int matriks_2[10][10];
int matriks_hasil[10][10];
int baris, kolom;
char pilih;

int input_user(int matriks_1[10][10], int matriks_2[10][10]){
	for(int i = 0; i < baris; i++){
		for(int j = 0; j < kolom; j++){
			cout<<"Masukan Matriks Pertama baris ke "<<i+1<<" Kolom Ke "<<j+1<<": ";
			cin>>matriks_1[i][j];
		}
	}
	
	cout<<"Matriks Pertama ialah : "<<endl;
	for(int i = 0; i < baris; i++){
		for(int j = 0; j < kolom; j++){
			cout<<matriks_1[i][j];
		}
		cout<<endl;
	}
	
	for(int i = 0; i < baris; i++){
		for(int j = 0; j < kolom; j++){
			cout<<"Masukan Matriks Kedua baris ke "<<i+1<<" Kolom Ke "<<j+1<<": ";
			cin>>matriks_2[i][j];
		}
	}
	
	cout<<"Matriks Kedua ialah : "<<endl;
	for(int i = 0; i < baris; i++){
		for(int j = 0; j < kolom; j++){
			cout<<matriks_2[i][j];
		}
		cout<<endl;
	}
}

int tambah(int matriks_1[10][10], int matriks_2[10][10]){
	for(int i = 0; i < baris; i++){
		for(int j = 0; j < kolom; j++){
			matriks_hasil[i][j] = matriks_1[i][j] + matriks_2[i][j];
		}
	}
}

int kurang(int matriks_1[10][10], int matriks_2[10][10]){
	for(int i = 0; i < baris; i++){
		for(int j = 0; j < kolom; j++){
			matriks_hasil[i][j] = matriks_1[i][j] - matriks_2[i][j];
		}
	}
}

int main(){
	start:
		cout<<"=====PRROGRAM OPERASI MATRIKS===="<<endl;
		cout<<"Masukan jumlah baris Matriks : ";
		cin>>baris;
		cout<<"Masukan jumlah kolom Matriks : ";
		cin>>kolom;
		
		cout<<"1.Penjumlahan \t 2.Pengurangan"<<endl;
		cout<<"Operasi apa yang ingin di lakukan? ";
		cin>>pilih;
		
		input_user(matriks_1,matriks_2);
		
		if(pilih == '1'){
			cout<<"Hasil Penjumlahan kedua Matriks Tersebut ialah : "<<endl;
			tambah(matriks_1, matriks_2);
		}else{
			cout<<"Hasil Pengurangan kedua Matriks Tersebut ialah : "<<endl;
			kurang(matriks_1, matriks_2);
		}
		
		for(int i = 0; i < baris; i++){
			for(int j = 0; j < kolom; j++){
				cout<<matriks_hasil[i][j];
			}
			cout<<endl;
		}
	
	cout<<"Apakah ingin melanjutkan(y/n)? ";
	cin>>pilih;
	if(pilih == 'y' || pilih == 'Y'){
		system("cls");
		goto start;
	}else{
		cout<<"=====TERIMAKASIH=====";
	}
}
