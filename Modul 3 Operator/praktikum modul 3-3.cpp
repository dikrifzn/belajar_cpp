#include<iostream>
#include<conio.h>
main(){
	int k,l,m,n,o,p,q,r;
	
	std::cout<<"Masukan Nilai ke-1 = "; std::cin>>k;
	std::cout<<"Masukan Nilai ke-2 = "; std::cin>>l;
	std::cout<<"Masukan Nilai ke-3 = "; std::cin>>m;
	
	//proses
	o = (k + l)*m < 100;
	p = k * l * m > 100;
	q = o + p < 500;
	r = o && p && q;
	
	//tampilkan getch();
	std::cout<<" Program Oprasi Logika AND \n"<<std::endl;
	getch();
	std::cout<<" Hasil dari Nilai ke-4 = (Nilai ke-1 + Nilai ke-2) x Nilai ke -3 < 100 adalah : "<<0<<std::endl;
	getch();
	std::cout<<" Hasil dari Nilai ke-5 = Nilai ke-1 + Nilai ke-2 + Nilai ke-3 > 100 adalah : "<<p<<std::endl;
	getch();
	std::cout<<" Hasil dari Nilai ke-6 = Nilai ke-4 + Nilai ke-5 < 500 adalah : "<<q<<std::endl; 
	getch();
	std::cout<<" \nMaka Logika AND = Nilai ke-4 && Nilai ke-5 && Nilai ke-6 adalah = "<<r<<std::endl; getch();
}

