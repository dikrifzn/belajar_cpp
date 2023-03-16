#include <iostream>
using namespace std;

int main(){
	string kota[7];
	
	kota[0] = "Yogya";
	kota[1] = "Medan";
	kota[2] = "Bandung";
	kota[3] = "Denpasar";
	kota[4] = "Surabaya";
	kota[5] = "Solo";
	kota[6] = "Mataram";
	
	for(int i = 0; i < 7; i++){
		cout<<kota[i]<<endl;
	}
	return 0;
}
