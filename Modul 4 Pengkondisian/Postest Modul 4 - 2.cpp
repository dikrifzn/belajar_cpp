#include <iostream>
using namespace std;

int main(){
	string alat;
	
	cout<<"=====PROGRAM MERAKIT KOMPUTER====="<<endl;
	cout<<"Masukan Komponen Komputer : ";
	cin>>alat;
	
	if(alat == "Motherboard"){
		cout<<"Urutan Pertama"<<endl;
	}else if(alat == "Motherboard" || alat == "motherboard"){
		cout<<"Urutan Pertama"<<endl;
	}else if(alat == "Prosessor" || alat == "prosessor"){
		cout<<"Urutan Ke-dua"<<endl;
	}else if(alat == "Heatsink" || alat == "heatsink"){
		cout<<"Urutan Ketiga"<<endl;
	}else if(alat == "Memori" || alat == "memori"){
		cout<<"Urutan Ke-empat"<<endl;
	}else if(alat == "vga" || alat == "VGA"){
		cout<<"Urutan Ke-Lima"<<endl;
	}else if(alat == "powersuply"){
		cout<<"Urutan Ke-enam"<<endl;
	}else if(alat == "Hardisk" || alat == "hardisk"){
		cout<<"Urutan Ke-tujuh"<<endl;
	}else{
		cout<<"Alat Tidak Diketahui";
	}

	return 0;
}
