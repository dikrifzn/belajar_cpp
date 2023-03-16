#include <iostream>
using namespace std;

int main(){
	int n, i, faktorial{1};
	
	cout<<"Masukan bilangan bulat : ";
	cin>>n;
	cout<<n<<"! = ";
	
	if(n>1){
		i = n;
		while(i >= 1){
			if(i != 1){
				cout<<i<<" X ";
			}else{
				cout<<i<<" = ";
			}
			faktorial *= i;
			i--;
		}
	}
	cout<<faktorial;
	return 0;
}
