#include <iostream>
using namespace std;

int main(){
	
	string kegiatan;
	
	cout<<"Masukan Kegiatan : ";
	cin>>kegiatan;
	
	if(kegiatan == "menyapu" || kegiatan == "Menyapu"){
		cout<<"Menggunakan Sapu"<<endl<<endl;
		
		cout<<"Masukan Kegiatan : ";
		cin>>kegiatan;
	}else
	if(kegiatan == "mengepel" || kegiatan == "Mengepel"){
		cout<<"Menggunakan Pelan";
	}else
	if(kegiatan == "mencuci" || kegiatan == "Mencuci"){
	cout<<"Menggunakan Sikat atau Spons";
	}else{
		cout<<"Kegiatan Tidak Diketahui";
	}
	
	return 0;
}
