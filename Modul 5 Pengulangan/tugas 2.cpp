#include <iostream>
using namespace std;

int main(){
	long data, rotasi_data = 0;
	cout<< "Masukan data : ";
	cin>>data;
	
	do{
		rotasi_data *= 10;
		rotasi_data += data % 10;
		data /= 10;
	}while(data != 0);
	cout<<"Hasil Rotasi digit ke kanan : "<<rotasi_data;
}
