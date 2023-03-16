#include <iostream>
#include <conio.h>
using namespace std;

int segitiga(int alas, int t){
	int LS; LS = 0.5*alas*t; return LS;
}

int persegi(int s){
	int LP; LP=s*s; return LP;
}

int main(){
	int a;
	float lagi, LP,LS,s,alas,t; char ulang;
	show:
		cout<<" 1. Menghitung Luas Persegi."<<endl;
		cout<<" 2. Menghitung Luas Segitiga."<<endl;
		cout<<"Masukan pilihan : "; cin>>a;
		switch(a){
			case 1: cout<<"Masukan sisi "; cin>>s;
			LP = persegi(s);
			cout<<"Luas persegi adalah "<<LP; break;
			
			case 2: cout<<"Masukan alas "; cin>>alas;
			cout<<"Masukan tinggi "; cin>>t;
			LS = segitiga(alas,t);
			cout<<"Luas segitiga adalah "<<LS; break;
		}
		cout<<"\nMau mencoba lagi ? [Y/T]"<<endl; ulang=getch();
		if(ulang == 'Y' || ulang == 'y'){
			goto show;
		}
		if(ulang == 'T' || ulang == 't'){
			cout<<"\nT  E  R  I  M  A  K  A  S  I  H";
		}
}
