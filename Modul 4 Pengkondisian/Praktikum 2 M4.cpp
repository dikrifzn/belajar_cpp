#include<iostream>
#include<cstdlib>
#include<iomanip>

using namespace std;
int main ()
{
	double x,y,z;
	
	//memasukan ni vriable
	cout<<"Masukan nilai x: ";
	cin>>x;
	cout<<"Masukan nilai y: ";
	cin>>y;
	
	if(y == 0)
	{
		cout<<"KESALAHAN: NILAI Y TIDAK BOLEH NOL."<<endl;
		exit(1);
	}
	z = x / y;
	cout<<fixed;
	cout<<x<<" / "<<y<< " = "<<z<<endl;
	return 0;
}
