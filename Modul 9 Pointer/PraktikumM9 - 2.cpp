#include <iostream>
using namespace std;

int main(){
	int bilangan[] = {77, 66, 55, 44, 33, 22, 11};
	int *ptr = bilangan;
	
	int jumData = sizeof(bilangan)/sizeof(int);
	
	cout<<"Cara Pertama : "<<endl;
	for(int i = 0; i < jumData; i++){
		cout<<*(ptr + i)<<endl;
	}
	
	cout<<"Cara Kedua : "<<endl;
	for(int i = 0; i < jumData; i++){
		cout<<ptr[i]<<endl;
	}
	
	return 0;
}
