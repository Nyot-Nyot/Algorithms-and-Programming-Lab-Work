#include <stdio.h>

const float phi = 3.14159265358979323846;

int main(){
	//deklarasi
	int pilihan, jari_jari, sisi_kubus;
	int panjang, lebar, tinggi;
	float hasil;
	
	//interface
	printf("Kalkulator luas permukaan\n");
	printf("--------------------------------------------------\n");
	printf("--petunjuk penggunaan--\n");
	printf("masukkan angka yang sesuai dengan pilihan anda\n");
	printf("1. Rumus Luas Permukaan Bola\n2. Rumus Luas Permukaan Kubus\n3. Rumus Permukaan Balok\n4. Rumus Luas Permukaan Tabung\n");
	printf("--------------------------------------------------\n");
	printf("Masukkan pilihan anda: ");
	scanf("%i", &pilihan);
	
	
	//statement
	switch(pilihan) {
		case 1:
			printf("=====Kalkulator luas permukaan bola=====\n");
			printf("Masukkan jari-jari bola: ");
			scanf("%i", &jari_jari);
			hasil = 4 * phi * (jari_jari * jari_jari);
			printf("Luas permukaan bola = %f", hasil);
			break;
			
		case 2:
			printf("=====Kalkulator luas permukaan kubus=====\n");
			printf("Masukkan panjang sisi kubus: ");
			scanf("%i", &sisi_kubus);
			hasil = 6 * (sisi_kubus * sisi_kubus);
			printf("Luas permukaan kubus = %f", hasil);
			break;
			
		case 3:
			printf("=====Kalkulator luas permukaan balok=====\n");
			printf("Masukkan panjang balok: ");
			scanf("%i", &panjang);
			printf("Masukkan lebar balok: ");
			scanf("%i", &lebar);
			printf("Masukkan tinggi balok: ");
			scanf("%i", &tinggi);
			hasil = 2 * ((panjang * lebar) + (panjang * tinggi) + (lebar * tinggi));
			printf("Luas permukaan balok = %f", hasil);
			break;
			
		case 4:
		    printf("=====Kalkulator luas permukaan tabung=====\n");
		    printf("Masukkan jari-jari tabung: ");
		    scanf("%i", &jari_jari);
		    printf("Masukkan tinggi tabung: ");
		    scanf("%i", &tinggi);
		    hasil = (2 * phi * jari_jari * tinggi) + (2 * phi * jari_jari * jari_jari);
		    printf("Luas permukaan tabung = %f", hasil);
		    break;

		default:
			printf("Pilihan tidak valid");
	}

	
	return 0;
}
