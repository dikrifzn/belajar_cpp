#include <iostream>
using namespace std;

main(){
	int A[7];
	int j,k,c,temp;
	cout<<"Masukan nilai pada elemen Array sebanyak 7 nilai "<<endl;
	for(c = 0; c< 7; c++){
		cout<<"A["<<c<<"] = ";
		cin>>A[c];
	}
		cout<<"\nNilai elemen array sebelum diurutkan : "<<endl;
		for(c = 0; c < 7; c++){
			cout<<A[c]<<" ";
		}
		for(j = 0; j <= 7; j++){
			for(k = 7; k > 0; k--){
				if(A[k+1] < A[k-1]){
					temp = A[k];
					A[k] = A[k-1];
					A[k-1] = temp;
				}
			}
		}
		cout<<"\nNilai elemen array setelah diurutkan : "<<endl;
		for(c=0; c<7;c++){
			cout<<A[c]<<" ";
		}
		return 0;
}
