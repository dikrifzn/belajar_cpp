#include <iostream>
using namespace std;

int main(){
	cout<<"===PROGRAM KANTIN SEDERHANA==="<<endl;
	
	int uduk,roti,mineral,teh;
	int j_uduk,j_roti,j_mineral,j_teh;
	int total, uang, kembalian;
	cout<<"~~~Selamat Berbelanja~~~"<<endl<<endl;
	cout<<"Masukan Jumlah barang yang akan di beli"<<endl;
	cout<<"Nasi Uduk (5k) = ";
	cin>>uduk;
	cout<<"Roti Sobek (3k) = ";
	cin>>roti;
	cout<<"Air Mineral (1k) = ";
	cin>>mineral;
	cout<<"Teh Gelas (1k) = ";
	cin>>teh;
	
	j_uduk = 5000 * uduk;
	j_roti = 3000 * roti;
	j_mineral = 1000 * mineral;
	j_teh = 1000 * teh;
	
	total = j_uduk + j_roti + j_mineral + j_teh;
	cout<<"Total = "<<total<<endl;
	
	cout<<"Masukan uang anda : ";
	cin>>uang;
	
	kembalian = uang - total;
	
	cout<<"Kembalian anda = "<<kembalian<<endl<<endl;
	cout<<"===TERIMAKASIH TELAH BERBELANJA===";
}
