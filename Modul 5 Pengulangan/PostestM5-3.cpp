#include <iostream>
using namespace std;

int main(){
	int lampu45w, lampu15w, lampu25w, lampu100w, tv110w, pompa125w;
	int total_lampu = 0;
	int total_tv = 0;
	int total_pompa = 0;
	float total_seluruh = 0;
	
	for(int i = 1; i <= 30; ++i){
		for(int x = 1; x <= 12; ++x){
			lampu45w = 45 * 2;
			
			lampu15w = 15 * 10;
			
			lampu25w = 25 * 5;
			
			lampu100w = 100 * 5;
			
			total_lampu += lampu45w + lampu15w + lampu25w + lampu100w;
		}
		for(int y = 1; y <= 9; ++y){
			tv110w = 110 * 1;
			total_tv += tv110w;
		}
		for(int z = 1; z <= 4; ++z){
			pompa125w = 125 * 1;
			total_pompa += pompa125w;
		}
	}
	total_seluruh = (total_lampu + total_tv + total_pompa)/1000;
	cout<<"Total Seluruh Pengeluaran listrik selama sebulan ialah : "<<total_seluruh<<" kWh"<<endl;
	cout<<"Jika Harga listrik Rp1.353/kWh maka total yang harus di bayar ialah : Rp"<<1353*total_seluruh<<endl;
	cout<<"Jika Harga listrik Rp1.444,70/kWh maka total yang harus di bayar ialah : Rp"<<1444.70*total_seluruh<<endl;
}
