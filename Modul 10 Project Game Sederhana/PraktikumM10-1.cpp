#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	int arr[1];
	arr[0]=rand()%10;

	cout<<"..........Tebak Angka dari 1-10 (Cari angka X)..........\n";

	for (int i=2; i>=0; i--){
		cout << "Kesempatan mu untuk menebak adalah sebanyak " << i+1 << "kali\n\nMasukkan Angka: ";
		int tebak;
		cin>> tebak;
			if (tebak==arr[0]){
				cout << "Angka X adalah " << tebak <<"\nTebakanmu benar!\n";
				return 0;
			}else if (i>0){
				cout <<"Angka yang ditebak salah!\n" << endl;
			}else{
				cout << "InKamu gagal menebak angka.\n"<<endl;
				cout<<"Angka yang benar adalah = "<<arr[0];
			}
	}
}
