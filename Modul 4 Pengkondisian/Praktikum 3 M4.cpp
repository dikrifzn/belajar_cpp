#include<iostream>
using namespace std;
main()
{
	int n1;
	cout<<" Program Menentukan nilai ganjil atau genap "<<endl;
	cout<<"Masukan sembarang nilai = ";
	cin>>n1;
	
	//proses
	if (n1%2 == 0){
		cout<<"Bilangan = "<<n1<<" adalah angka Genap "<<endl;
	}
	else{
		cout<<"Bilangan = "<<n1<<" adalah angka Ganjil "<<endl;
	}
}
