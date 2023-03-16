#include<iostream>
#include<string>
using namespace std;

int main(){
	int a {10};
	string s ("Bahasa");
	cout<<"keadaan awal"<<endl;
    cout<<"Nilai a : "<<a<<endl;
	cout<<"Nilai s : "<<s<<endl;
	
	//menambahkan nilai i dengan 9
	a += 9; //dapat ditulis: a = a + 9
	
	//menyambung string s
	s += " ";
	s += "program C++";
	cout<<"keadaan akhir"<<endl;
	cout<<"Nilai a : "<<a<<endl;
	cout<<"Nilai s : "<<s<<endl;
	
	return 0;
}

