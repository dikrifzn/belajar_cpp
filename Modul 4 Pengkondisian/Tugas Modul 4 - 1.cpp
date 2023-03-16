#include <iostream>
using namespace std;

int main(){
	
	int algo, lti, pti, bisnis, desain, hasil;
	
	cout<<" Masukan Nilai MK Algoritma dan Pemograman : ";
	cin>>algo;
	
	cout<<" Masukan Nilai MK Literasi Teknologi Informasi : ";
	cin>>lti;
	
	cout<<" Masukan Nilai MK Pengantar Teknologi Informasi : ";
	cin>>pti;
	
	cout<<" Masukan Nilai MK Manajemen & Bisnis : ";
	cin>>bisnis;
	
	cout<<" Masukan Nilai MK Desain Grafis : ";
	cin>>desain;
	
	hasil = (algo + lti + pti + bisnis + desain)/5;
	cout<<"Nilai Rata-Rata = "<<hasil<<endl;
	if(hasil >= 79){
		cout<<"LULUS";
	}else{
		cout<<"GAGAL";
	}
	return 0;
}
