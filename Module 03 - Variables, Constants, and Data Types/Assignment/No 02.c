/*
    Nama: Dzaki Sultan Rabbani
    NIM: 23343035
    Prodi: Informatika
*/

#include <stdio.h>

int main(){
	float celcius, kelvin, fahrenheit, reamur;
	
	printf("Program konversi suhu:)\n"); //ampun suhu
	printf("-----------------------------------------\n");
	
	printf("Masukkan berapa suhu anda dalam celcius: ");
	scanf("%f", &celcius);
	
	kelvin = celcius + 273.15;
	fahrenheit = (celcius * 1.8) + 32;
	reamur = celcius * 0.8;
	
	printf("Suhu anda dalam kelvin: %2.f K\n", kelvin);
	printf("Suhu anda dalam fahrenheit: %2.f F\n", fahrenheit);
	printf("Suhu anda dalam reamur: %2.f R\n", reamur);
	
	return 0;
}
