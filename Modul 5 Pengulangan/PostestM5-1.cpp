#include <iostream>
using namespace std;

int main()
{
    int  baris = 10, i, k, z;
	
//	cout<<"Masukan Tinggi Segitga : ";
//	cin>>baris
	//i sama dengan 1
	//ketika i kurang dari sama dengan baris(10)
	//i ditambah 1
    for(i = 0; i <= baris; ++i){
    	cout<<endl;
    	//z sama dengan baris(10)
    	//ketika z tidak sama dengan i
    	//z dikurangi 1
    	for(z = baris; z != i; --z){
    		cout<<" ";
		}
		//k sama dengan 0
		//ketika k tidak sama dengan i
		//k ditambah 1
		for(k = 0; k != i; ++k){
    		cout<<"* ";
		}
	}
	cout<<endl;
	return 0;
}
