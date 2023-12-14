/*
    Nama: Dzaki Sultan Rabbani
    NIM: 23343035
    Prodi: Informatika
*/

#include <stdio.h>

int main(){
	char uang;
	float rupiah, dollar;
	
	printf("Money changer:)\n");
	printf("------------------------------------------------\n");
	printf("Kamu mau menukar ke mata uang apa?\n");
	printf("Pilih R untuk mengonversikan uang anda ke Rupiah\n");
	printf("Pilih D untuk mengonversikan uang anda ke Dollar\n");
	printf("ketik: r/d \n"); //r untuk rupiah sedangkan d untuk dollar
	scanf("%s", &uang);
	
	if (uang == 'r' || uang == 'R'){
		printf("Masukkan jumlah uang Anda: $\n");	
		scanf("%f", &dollar);
		dollar = dollar * 14250;
		
		if (dollar == (int)dollar){
			printf("Uang anda dalam rupiah adalah %.0f", dollar);
		}
		else {
			printf("Uang anda dalam rupiah adalah %.3f", dollar);
		}
	}
	else if (uang == 'd' || uang =='D'){
		printf("Masukkan jumlah uang Anda: Rp\n");	
		scanf("%f", &rupiah);
		rupiah = rupiah / 14250;
		
		if (rupiah == (int)rupiah){
			printf("Uang anda dalam dollar adalah %.0f", rupiah);
		}
		else {
			printf("Uang anda dalam dollar adalah %.3f", rupiah);
		}
	}
	else {
		printf("Maaf, kami tidak melayani jenis uang tersebut :(");
	}
	return 0;
}
