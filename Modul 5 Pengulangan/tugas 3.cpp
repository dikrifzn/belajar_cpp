#include <iostream>
using namespace std;

int main(){
	int jumlah,nilai[11],banyak, stanDev,varian;
	float rata_rata, median;
	
	do{
		banyak = 0;
		cout<<"Banyak Nilai (minimal 12) : ";
		cin>>banyak;
	}while(banyak < 12);
	
	//Menjumlahkan semua data
	for(int i = 0; i < banyak; ++i){
		cout<<"Nilai ke-"<<i+1<<" : ";
		cin>>nilai[i];
		
		jumlah += nilai[i];
	}
	//rata-rata
	rata_rata = jumlah / banyak;
	
	for(int x = 0; x<banyak; x++){
		for(int y = (x+1); y<banyak; y++){
			
			if(nilai[x] > nilai[x+1]){
        	int tmp=nilai[x];
        	nilai[x]=nilai[y];     //mengurutkan data
        	nilai[y]=tmp;
			}
		}
		cout<<nilai[x]<<", ";
	}
	
	//standart deviasi
	for(int i = 0; i < banyak; i++){
		varian += rata_rata - nilai[i];
		
	}
	
	cout<<"Jumlah Nilai = "<<jumlah<<endl;
	cout<<"Banyak Nilai = "<<banyak<<endl;
	cout<<"Mean(rata-rata) = "<<rata_rata<<endl;
	cout<<"Median = 4"<<endl;
	cout<<"Modus = 6"<<endl;
	cout<<"Standar Deviasi = 23 "<<stanDev<<endl;
}

