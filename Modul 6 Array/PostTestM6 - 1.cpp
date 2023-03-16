#include <iostream>
using namespace std;

int main(){
	int data[25];
	int cari;
	
	//mengisi data
	for(int i = 0; i < 25; i++){
		data[i] = i + 1;
	}
	
	cout<<"Masukan Angka untuk dicarikan Indeksnya : ";
	cin>>cari;
	
	int i = 0;
	do{
		cout<<"Mencari Indeks dari data-"<<cari<<".";
		system("cls");
		cout<<"Mencari Indeks dari data-"<<cari<<"..";
		system("cls");
		cout<<"Mencari Indeks dari data-"<<cari<<"...";
		system("cls");
		cout<<"Mencari Indeks dari data-"<<cari<<"....";
		system("cls");
		cout<<"Mencari Indeks dari data-"<<cari<<".....";
		system("cls");
		i++;
	}while(i < 5);
	
	for(int j = 0; j < 25; j++){
		if(data[j] == cari){
			cout << "indeks dari data-"<<cari<<" adalah : "<<j;
			break;
		}
	}
}
