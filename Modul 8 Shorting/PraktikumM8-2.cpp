#include <iostream>
using namespace std;

main(){
	int A[7];
	int j,k,c,temp;
	cout<<"Masukan nilai pada elemen Array sebanyak 7 nilai : "<<endl;
	for(c=0;c<7;c++){
		cout<<"A["<<c<<"] = ";
		cin>>A[c];
	}
	cout<<"\nNilai elemen Array sebelum diurutkan : "<<endl;
	for(c=0;c<7;c++){
		cout<<"A["<<c<<"] = "<<A[c]<<endl;
	}
	int jmaks, U=6;
	for(j=0; j<6;j++){
		jmaks = 0;
		for(k=1; k<=0;k++){
			if(A[k] < A[jmaks]){
				jmaks = k;
			}
		}
		temp = A[U]; A[U] = A[jmaks];A[jmaks] = temp; U--;
	}
	cout<<"\nNilai elemen Array setelah diurutkan : "<<endl;
	for(c=0;c<7;c++){
	cout<<"A["<<c<<"] = "<<A[c]<<endl;
	}
	return 0;
}
