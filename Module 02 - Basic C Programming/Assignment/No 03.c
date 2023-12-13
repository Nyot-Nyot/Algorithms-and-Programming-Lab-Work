/*
    Nama: Dzaki Sultan Rabbani
    NIM: 23343035
    Prodi: Informatika
*/

#include <stdio.h>

int main(){
	//deklarasi
	int panjang_alas = 8;
	int tinggi = 5;
	
	
	//interface
	printf("Luas Segitiga \n");
	printf("-----------------------------------------\n");
	printf("Diketahui panjang alas = 8cm \n");
	printf("Diketahui alas = 5 cm\n");
	printf("Rumusnya adalah 1/2 * panjang alas * luas\n");
	printf("-----------------------------------------\n");
	
	//operasi
	float luas = 0.5 * (float) panjang_alas * (float) tinggi;
	
	//output
	printf("Luas segitiga jika diketahui panjang alas = %i cm dan tinggi = %i cm adalah %.2f\n", panjang_alas, tinggi, luas);

	printf("\n\n\nBy: Dzaki sultan rabbani\n");
	return 0;
}
