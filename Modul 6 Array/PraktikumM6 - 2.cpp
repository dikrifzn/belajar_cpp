#include <iostream>
#include <cstdlib>
using namespace std;

main(){
	int data[10];
	int n;
	
	for(n = 0; n <= 9; n++){
		cout<<"Masukan Data-"<<n<<" : ";
		cin >> data[n];
		system("cls");
	}
	
	for(n = 0; n <= 9; n++){
		cout<<"\nData ke-"<<n<<" : "<<data[n];
	}
}
