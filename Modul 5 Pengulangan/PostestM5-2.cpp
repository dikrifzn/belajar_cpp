#include <iostream>
using namespace std;

int main(){
	int baris = 10, spasi, x, y, z;
	
	for(x = 0; x <= baris; ++x){
		cout<<endl;
		for(y = 0; y != x; ++y){
			cout<<" ";
		}
		for(z = baris; z != x; --z){
			cout<<"* ";
		}
	}
}
