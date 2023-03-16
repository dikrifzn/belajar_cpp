#include <iostream>
using namespace std;

int main(){
	char huruf;
	int angka;
	float decimal;
	
	cout<<"Masukan Huruf : ";
	cin>>huruf;
	cout<<"Masukan Bilangan Bulat : ";
	cin>>angka;
	cout<<"Masukan Bilangan Decimal : ";
	cin>>decimal;
	
	cout<<huruf<<endl;
	cout<<angka<<endl;
	cout<<decimal<<endl<<endl;
	
	cout<<huruf<<angka<<decimal;
}

