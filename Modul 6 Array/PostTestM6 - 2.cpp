#include <iostream>
using namespace std;

int main(){
	int data[10];
	
	//menginputkan
	for(int i = 0; i < 10; i++){
		cout<<"Masukan data ke-"<<i+1<<" : ";
		cin>>data[i];
	}

		//mengeluarkan
	for(int i = 0; i < 10; i++){
		cout<<data[i]<<", ";
	}
	
	cout<<endl<<"Di urutkan Menjadi"<<endl;	
	//mengurutkan
	for(int j = 0;j < 10; j++){
        for(int i=(10-1);i>=0;i--){
        	if(data[i]<data[i-1]){
			    int temp;
			    temp=data[i];
			    data[i]=data[i-1];
			    data[i-1]=temp;
			}
		}
	}
	
	//mengeluarkan
	for(int i = 0; i < 10; i++){
		cout<<data[i]<<", ";
	}
	
	for(int i = 0; i < 10; i++){
		for(int j = 1; j < 11; j++){
			if 
		}
	}
    
    cout<<"Modus = "<<endl;
    cout<<"Nilai Minimum = "<<data[0]<<endl;
    cout<<"Nilai Maksimum = "<<data[9];
}
