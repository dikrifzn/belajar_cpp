#include <iostream>
using namespace std;

int main(){
	string data;
	bool hasil;
	
	cout<<"Masukan Data(Huruf/Angka) : ";
	cin>>data;
	
	hasil = data == "1" || data == "2" || data == "3" || data == "4" || data == "5" || data == "6" || data == "7" || data == "8" || data == "9" || data == "0";
	
	if (hasil){
		cout<<"Data Yang anda Masukan Adalah \""<<data[0]<<"\" Merupakan Numerik";
	}else{
		cout<<"Data Yang anda Masukan Adalah \""<<data[0]<<"\" Merupakan Karakter";
	}
}
