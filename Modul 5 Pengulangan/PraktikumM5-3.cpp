#include <iostream>
using namespace std;

int main(){
	int idxmax, i;
	int tab_int[10];
	
	idxmax = 0;
	
	for(i = 1; i < 10; i++){
		if(tab_int[i] > tab_int[idxmax]){
			idxmax = i;
		}
	}
	cout<<"Index nilai maksimum : "<<idxmax<<endl;
	return 0;
}
