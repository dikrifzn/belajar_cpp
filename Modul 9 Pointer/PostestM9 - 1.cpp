#include <iostream>
#include <cstdlib>
using namespace std;

int pilih = 0;
int total = 0;
int uang = 0;

void makanan(){
	cout<<"-----Makanan-----"<<endl;
	cout<<"1. Sop Iga..............Rp 15.000"<<endl;
	cout<<"2. Ayam Bakar...........Rp 25.000"<<endl;
	cout<<"3. Ikan Bakar...........Rp 25.000"<<endl;
	cout<<"4. Iga Bakar............Rp 25.000"<<endl;
	cout<<"5. Sate Madura..........Rp 30.000"<<endl;
	cout<<"0. Selanjutnya"<<endl;
}

void minuman(){
	cout<<"-----Minuman-----"<<endl;
	cout<<"1. Teh Manis...........Rp 5.000"<<endl;
	cout<<"2. jus Jeruk...........Rp 7.000"<<endl;
	cout<<"3. Jus Lemon...........Rp 7.000"<<endl;
	cout<<"4. Es Teler............Rp 10.000"<<endl;
	cout<<"5. Es Serut............Rp 10.000"<<endl;
	cout<<"0. Selanjutnya"<<endl;
}

int exe_mkn(int *harga){
	switch(pilih){
 		case 1:
		    *harga += 15000;
		    break;
		case 2:
		    *harga += 25000;
		    break;
		case 3:
		    *harga += 25000;
		    break;
		case 4:
			*harga += 25000;
			break;
		case 5:
			*harga += 30000;
			break;
		case 0:
			break;
	}
}

int exe_mnm(int *harga){
	switch(pilih){
 		case 1:
		    *harga += 5000;
		    break;
		case 2:
		    *harga += 7000;
		    break;
		case 3:
		    *harga += 7000;
		    break;
		case 4:
			*harga += 10000;
			break;
		case 5:
			*harga += 10000;
			break;
		case 0:
			break;
	}
}

int main(){
	cout<<"=====BINER RESTAURANT====="<<endl;
	
	makanan();
	for(int i = 0; i < 50; i++){
		cout<<"Silahkan Pilih menu Makanan : ";
		cin>>pilih;
		if(pilih == 0){
			break;
		}
		exe_mkn(&total);
	}
	system("cls");
	
	cout<<"=====BINER RESTAURANT====="<<endl;
	minuman();
	for(int i = 0; i < 50; i++){
		cout<<"Silahkan Pilih menu Minuman : ";
		cin>>pilih;
		if(pilih == 0){
			break;
		}
		exe_mnm(&total);
	}
	system("cls");
	
	cout<<"=====BINER RESTAURANT====="<<endl<<endl;
	cout<<"Total Harga = Rp "<<total<<endl<<endl;
	
	cout<<"Masukan uang pembayaran : Rp ";
	cin>>uang;
	
	uang -= total;
	system("cls");
	
	cout<<"=====BINER RESTAURANT====="<<endl<<endl;
	cout<<"Kembalian anda = Rp "<<uang<<endl<<endl;
	cout<<"Pesanan Anda akan Segera di Antar ke Meja Anda"<<endl;
	cout<<"==========Terimakasih Telah Memesan===========";
}
