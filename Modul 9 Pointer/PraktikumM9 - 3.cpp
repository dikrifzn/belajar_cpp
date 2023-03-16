#include <iostream>
using namespace std;

void ubah(int *x);

int main(){
	int arg = 12;
	
	cout<<"isi arg semula = "<<arg<<endl;
	
	ubah(&arg);
	
	cout<<"isi arg sekarang = "<<arg<<endl;
	
	return 0;
}

void ubah(int *x){
	*x = 34;
}
