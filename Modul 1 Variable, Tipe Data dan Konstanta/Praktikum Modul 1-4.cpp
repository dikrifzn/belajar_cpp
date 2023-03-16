#include <iostream>
#include <typeinfo>
using namespace std;

int main(){
	//inisiasi variable
	int a {10};			//a diisi dengan tipe int
	double b {4.95}; 	//b diisi dengan tipe double
	char c {'B'};		//c diisi dengan tipe char
	float d {4.95F};	//d diisi dengan tipe float
	
	//menampilkan nilai
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	cout<<"c = "<<c<<endl;
	cout<<"d = "<<d<<endl;
	
	//menampilkan tipe data dengan menggunakan keyword typeid()
	cout<<"Tipe data a = "<<typeid(a).name()<<endl;
	cout<<"Tipe data b = "<<typeid(b).name()<<endl;
	cout<<"Tipe data c = "<<typeid(c).name()<<endl;
	cout<<"Tipe data d = "<<typeid(d).name()<<endl;
	
	return 0;
}

