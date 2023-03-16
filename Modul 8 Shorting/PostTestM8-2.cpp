#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	char kalimat[50];
	char huruf;
	int jumlah_huruf = 0;
	
	cout<<"Masukan Kalimat : ";
	gets(kalimat);
	cout<<endl;
	
	for(int i = 0; i < 50; i++){
		if(kalimat[i] == 'a' || kalimat[i] == 'A'){
			jumlah_huruf++;
		}
	}
	
	cout<<"\""<<kalimat<<"\""<<endl;
	cout<<"Banyaknya huruf A pada kalimat di atas ialah "<<jumlah_huruf<<endl;
}
