#include<iostream> 
using namespace std;

int main() {
	char huruf;
	int ascii;
	cout<<"Masukan sebuah karakter : ";
	cin>>huruf;
	ascii = int(huruf);
	cout<<"ASCII dari nilai tersebut adalah : "<< ascii<<endl;
	
	return 0;
}

