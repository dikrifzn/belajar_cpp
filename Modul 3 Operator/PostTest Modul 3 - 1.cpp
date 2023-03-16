#include <iostream>
using namespace std;

int main(){
	cout<<"===PROGRAM KALKULATOR SEDERHANA==="<<endl;
	//inisialisasi
	int nilai_1,nilai_2,jumlah,kurang,kali,bagi,sisa;
	
	//Input
	cout<<"Masukan Nilai 1 : ";
	cin>>nilai_1;
	cout<<"Masukan Nilai 2 : ";
	cin>>nilai_2;
	
	//Prosess
	jumlah = nilai_1 + nilai_2;
	kurang = nilai_1 - nilai_2;
	kali = nilai_1 * nilai_2;
	bagi = nilai_1 / nilai_2;
	sisa = nilai_1 % nilai_2;
	
	//Output
	cout<<endl<<nilai_1<<" + "<<nilai_2<<" = "<<jumlah<<endl;
	cout<<endl<<nilai_1<<" - "<<nilai_2<<" = "<<kurang<<endl;
	cout<<endl<<nilai_1<<" x "<<nilai_2<<" = "<<kali<<endl;
	cout<<endl<<nilai_1<<" : "<<nilai_2<<" = "<<bagi<<endl;
	cout<<endl<<nilai_1<<" % "<<nilai_2<<" = "<<sisa;
}

