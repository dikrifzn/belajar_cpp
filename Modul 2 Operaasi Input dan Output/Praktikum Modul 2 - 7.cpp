#include<stdio.h>
#include<conio.h> 

main(){ 
	int g; 
	float phi; 
	char a; 
	printf("Masukan Sebuah karakter : "); 
	a = getchar(); 
	getch(); 
	puts(" Masukan Sembarang Nilai "); 
	printf(" Nilai Sembarang = "); 
	scanf("%d",&g); 
	printf(" Masukan Nilai Phi = "); 
	scanf("%f",&phi); 
	getch(); 
	printf("\nNilai sembarang adalah %d\n",g); 
	printf("\nNilai PHI yang dimasukan %3.2f\n",phi); 
	printf("\nCharakter yang dimasukan %c",a); 
}

