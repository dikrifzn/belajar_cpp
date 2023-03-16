#include <iostream>
using namespace std;

int main(){
	cout<<"===PROGRAM LOGIKA==="<<endl;
	int nilai_1, nilai_2,nilai_or;
	
	cout<<"Masukan Nilai Boolean Pertama (1/0) : ";
	cin>>nilai_1;
	cout<<"Masukan Nilai Boolean Kedua (1/0) : ";
	cin>>nilai_2;
	
	nilai_or = nilai_1 || nilai_2;
	
	cout<<endl<<nilai_1<<" OR "<<nilai_2<< " = "<<nilai_or<<endl;
	
	cout<<endl<<"Negasi/NOT dari "<<nilai_1<<" = "<<!nilai_1<<endl;
	cout<<"Negasi/NOT dari "<<nilai_2<<" = "<<!nilai_2<<endl;
}
