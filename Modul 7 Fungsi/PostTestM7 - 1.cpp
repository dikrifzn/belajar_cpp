#include <iostream>
#include <cstdlib>
using namespace std;

int angka1, angka2, hasil;
char opera, ulang;

int tambah(int angka1, int angka2){
	int hasil;
	hasil = angka1 + angka2;
	return hasil;
}
int kurang(int angka1, int angka2){
	int hasil;
	hasil = angka1 - angka2;
	return hasil;
}
int kali(int angka1, int angka2){
	int hasil;
	hasil = angka1 * angka2;
	return hasil;
}
int bagi(int angka1, int angka2){
	int hasil;
	hasil = angka1 / angka2;
	return hasil;
}

int main(){
	
	another:
		cout<<"PROGRAM KALKULATOR SEDERHANA"<<endl;
	
		cout<<"Masukan Angka 1 : ";
		cin>>angka1;
	
		cout<<"Masukan operatror (+, -, x, /) : ";
		cin>>opera;
	
		cout<<"Masukan Angka 2 : ";
		cin>>angka2;
		
	if(opera == '+'){
		cout<<angka1<<" + "<<angka2<<" = "<<tambah(angka1,angka2)<<endl;
	}else
	if(opera == '-'){
		cout<<angka1<<" - "<<angka2<<" = "<<kurang(angka1,angka2);
	}else
	if(opera == 'x' || opera == 'X' || opera == '*'){
		cout<<angka1<<" x "<<angka2<<" = "<<kali(angka1,angka2);
	}else
	if (opera == '/' || opera == ':'){
		cout<<angka1<<" : "<<angka2<<" = "<<bagi(angka1,angka2);
	}else{
		cout<<"tolong Masukan operator yang benar!";
	}
	
	cout<<"\nMau mencoba lagi?[Y/T] : ";
	cin>>ulang;
	
	if(ulang == 'Y' || ulang == 'y'){
		system("cls");
		goto another;
	}else
	if(ulang == 'T' || ulang == 't'){
		system("cls");
		cout<<"Tengkyuu:^";
	}
}
