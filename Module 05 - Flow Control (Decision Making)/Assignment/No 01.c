/*
    Nama: Dzaki Sultan Rabbani
    NIM: 23343035
    Prodi: Informatika
*/

#include <stdio.h>


int main(){
	//declare
	int Operator, number1, number2, hasil;
	
	//interface
	printf("Kalkulator sederhana\n");
	printf("---------------------------------------------\n");
	printf("petunjuk penggunaan: \n");
	printf("masukkan angka yang sesuai dengan operasi yang anda inginkan.\n");
	printf("1. penjumlahan\n2. pengurangan\n3. perkalian\n4. pembagian\n5. hasil bagi\n");
	printf("---------------------------------------------\n");
	printf("masukkan pilihan anda: ");
	scanf("%i", &Operator);
	
	//statement
	switch(Operator) {
		case 1:
			printf("Masukkan angka pertama: ");
			scanf("%i", &number1);
			printf("Masukkan angka kedua: ");
			scanf("%i", &number2);
			hasil = number1 + number2;
			printf("%i + %i = %i", number1, number2, hasil);
			break;
			
		case 2:
			printf("Masukkan angka pertama: ");
			scanf("%i", &number1);
			printf("Masukkan angka kedua: ");
			scanf("%i", &number2);
			hasil = number1 - number2;
			printf("%i - %i = %i", number1, number2, hasil);
			break;
		
		case 3:
			printf("Masukkan angka pertama: ");
			scanf("%i", &number1);
			printf("Masukkan angka kedua: ");
			scanf("%i", &number2);
			hasil = number1 * number2;
			printf("%i * %i = %i", number1, number2, hasil);
			break;
			
		case 4:
			printf("Masukkan angka pertama: ");
			scanf("%i", &number1);
			printf("Masukkan angka kedua: ");
			scanf("%i", &number2);
			hasil =  number1 / number2;
			printf("%i / %i = %i", number1, number2, hasil);
			break;
			
		case 5:
			printf("Masukkan angka pertama: ");
			scanf("%i", &number1);
			printf("Masukkan angka kedua: ");
			scanf("%i", &number2);
			hasil = number1 % number2;
			printf("%i %% %i = %i", number1, number2, hasil);
			break;
		
		default:
			printf("pilihan tidak valid :)");
	}	
	
	return 0;
}
