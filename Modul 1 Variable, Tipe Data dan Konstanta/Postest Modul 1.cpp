#include<iostream> 
using namespace std;

int main() {
	enum nama_hari {senin = 1, selasa, rabu, kamis, jumat, sabtu, minggu};
	
	nama_hari hari_ke;
	
	hari_ke = senin;
	cout << "Hari Senin adalah hari ke = " << hari_ke <<endl;
	
	hari_ke = selasa;
	cout << "Hari Selasa adalah hari ke = " << hari_ke <<endl;
	
	hari_ke = rabu;
	cout << "Hari Rabu adalah hari ke = " << hari_ke <<endl;
	
	hari_ke = kamis;
	cout << "Hari Kamis adalah hari ke = " << hari_ke <<endl;
	
	hari_ke = jumat;
	cout << "Hari Jum'at adalah hari ke = " << hari_ke <<endl;
	
	hari_ke = sabtu;
	cout << "Hari Sabtu adalah hari ke = " << hari_ke <<endl;
	
	hari_ke = minggu;
	cout << "Hari Minggu adalah hari ke = " << hari_ke <<endl;
	
	return 0;
}

