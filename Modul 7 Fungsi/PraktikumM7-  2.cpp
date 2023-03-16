#include <iostream>
#include <conio.h>
#include <cstdlib>
using namespace std;

void garis();
int main(){
	system("cls");
	garis();
	cout<<"NIM NAMA MAHASISWA"<<endl;
	garis();
	cout<<"201508201 AMIR HAMZAH"<<endl;
	cout<<"201509330 PAIMAN"<<endl;
	garis();
}
void garis(){
	int i;
	for(i=0;i<=40;i++){
		cout<<"-";
	}
	cout<<endl;
}
