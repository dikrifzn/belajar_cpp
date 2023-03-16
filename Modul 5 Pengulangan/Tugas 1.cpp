#include <iostream>
using namespace std;

int main(){
	int jumlah,nilai,banyak;
	float rata_rata;
	
	do{
		banyak = 0;
		cout<<"Banyak Nilai (minimal 10) : ";
		cin>>banyak;
	}while(banyak < 10);
	
	
	for(int i = 1; i <= banyak; ++i){
		cout<<"Nilai ke-"<<i<<" : ";
		cin>>nilai;
		
		jumlah += nilai;
	}
	rata_rata = jumlah / banyak;
	cout<<"Jumlah Nilai = "<<jumlah<<endl;
	cout<<"Banyak Nilai = "<<banyak<<endl;
	cout<<"Rata-rata = "<<rata_rata;
}
