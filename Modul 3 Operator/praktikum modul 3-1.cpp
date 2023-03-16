#include<iostream>
#include<string>
#include<cstring>
#include<iomanip>
using namespace std;
int main()
{
	int i;
	int l;
	float f;
	double d;
	string cp_string;
	char c_program[10];
	
	//menggunakan operator
	i = 123;
	l = 123456;
	f = 123.456;
	d = 123456.789;
	cp_string = "Bahasa C++";
	strcpy(c_program,"Bahasa C") ;
	
	//menampilkan data
	cout<<i<<endl;
	cout<<l<<endl;
	cout<<f<<endl;
	cout<<d<<endl;
	cout<<cp_string<<endl;
	cout<<c_program<<endl;
	
	return 0;
}

