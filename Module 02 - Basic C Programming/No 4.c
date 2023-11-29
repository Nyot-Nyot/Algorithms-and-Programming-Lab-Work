#include <stdio.h>

int main(){
	//deklarasi
	int panjang = 10;
	int lebar = 5;

	//interface
	printf("Luas Persegi \n");
	printf("-----------------------------------------\n");
	printf("Diketahui panjang = 10cm \n");
	printf("Diketahui lebar = 5 cm\n");
	printf("Rumusnya adalah panjang * lebar\n");
	printf("-----------------------------------------\n");
	
	//operasi
	int luas = panjang * lebar;
	
	//output
	printf("Luas persegi jika diketahui panjang = %i cm dan lebar = %i cm adalah %i", panjang, lebar, luas);
	
	return 0;
}
