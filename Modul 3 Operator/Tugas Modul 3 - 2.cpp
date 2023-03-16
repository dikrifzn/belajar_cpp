#include <iostream>
#include <conio.h>
using namespace std;
 
int main(){
	int a = 100;
	int b = 101;
	int hasil;
	
	cout<<"Masukan Nilai a : ";
	cin>>a;
	cout<<"Masukan Nilai b : ";
	cin>>b;
	
	hasil = a & b;
	cout << "a & b = " << hasil << endl;
	hasil = a | b;
	cout << "a | b = " << hasil << endl;
	hasil = a ^ b;
	cout << "a ^ b = " << hasil << endl;
	hasil = a >> 1;
	cout << "a >> 1 = " << hasil << endl;
	hasil = b << 2;
	cout << "b << 2 = " << hasil << endl;
	hasil = ~a;
	cout << "~a = " << hasil << endl;
	
	return 0;
}
