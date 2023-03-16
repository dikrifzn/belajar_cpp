#include <conio.h>
#include <cstdlib>
#include <stdio.h>
#include <iostream>
using namespace std;

int a = 6;

int lokal();
int tambah10();

int main(){
	system("cls");
	cout<<"Penggunaan Variable Global"<<endl;
	
	cout<<"\nNilai a didalam fungsi main() ="<<a;
	lokal();
	cout<<"\nNilai a setelah pemanggilan fungsi lokal() = "<<a;
	
	tambah10();
	cout<<"\nNilai a setelah pemanggilan fungsi lokal() = "<<a;
	
	getch();
	cout<<"\n\n Hal ini terlihat bahwa variable a yang dideklarasikan diluar";
	cout<<"\nFungsi main(), dapat digunakan dalam fungsi main() dan fungsi lokal()";
}
int lokal(){
	a+=10;
}
	int tambah10(){
		a+=10;
	}
