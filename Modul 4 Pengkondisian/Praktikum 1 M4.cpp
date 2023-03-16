#include<iostream>
using namespace std;
int main()
{
	int n1,n2,n3,n4;
	cout<<"Program Menentukan Nilai Lulus/Tidak "<<endl;
	cout<<"Masukan Nilai Individu = ";
	cin>>n1;
	cout<<"Masukan Nilai Tugas = ";
	cin>>n2;
	cout<<"Masukan Nilai Ujian = ";
	cin>>n3;
	
	//proses
	n4 = (n1 + n2 + n3)/3;
	if (n4>65){
		cout<<" Nilai Rata-Rata = "<<n4<< " \n hasil dinyatakan Lulus";
		return 0;
	}
	cout<<" Nilai Rata-Rata = "<<n4<< "hasil dinyatakan Tidak Lulus";
	return 0;
}
