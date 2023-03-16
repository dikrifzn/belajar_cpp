#include<iostream>
#include<string.h>
using namespace std;
main()
{
	char gunung[10];
	cout<<"Ketikan Nama Gunung di Pulau Jawa: ";
	cin>>gunung;
	
	if((strcmp(gunung,"Cermai")==0) || (strcmp(gunung,"cermai")==0))
	{
		cout<<"Kuningan"<<endl;
	}else
	
	if((strcmp(gunung,"Slamet")==0) || (strcmp(gunung,"slamet")==0))
	{
		cout<<"Purwokerto"<<endl;
	}else
	
	if((strcmp(gunung,"Gede")==0) || (strcmp(gunung,"gede")==0))
	{
		cout<<"Bandung"<<endl;
	}else
	
	if((strcmp(gunung,"Salak")==0) || (strcmp(gunung,"salak")==0))
	{
		cout<<"Sukabumi"<<endl;
	}
	
	return 0;
}
