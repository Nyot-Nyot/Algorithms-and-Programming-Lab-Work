#include <stdio.h>

int main(){
	//declare
	int i, jenis_barang, total_harga = 0;
	char nama_barang[100];
	int harga_barang[100];
	
	//interface
	printf("Struk TOSERBA NyotNyot\n");
	printf("-----------------------------------------\n");
	printf("Jumlah jenis barang: ");
	scanf("%i", &jenis_barang);
	printf("\n");
	for(i = 0; i < jenis_barang; i++) {
		printf("Nama barang: ");
		scanf("%s", &nama_barang[i]);
		printf("Harga: ");
		scanf("%i", &harga_barang[i]);
		printf("\n");
	}
	printf("-----------------------------------------\n");
	
	//statement
	for(i = 0; i < jenis_barang; i++) {
		total_harga = total_harga + harga_barang[i];
	}
	printf("Total barang: %i\n", jenis_barang);
	printf("Total harga: %i\n", total_harga);
	
	//diskon
	if(total_harga <= 75000) {
		total_harga = total_harga - (total_harga * 0.05);
		printf("Selamat anda mendapat diskon sebesar 5%%\n");
		printf("Total harga anda menjadi : %i\n", total_harga);
	}
	
	if(total_harga > 75000 && total_harga < 125000) {
		total_harga = total_harga - (total_harga * 0.15);
		printf("Selamat anda mendapat diskon sebesar 15%%\n");
		printf("Total harga anda menjadi : %i\n", total_harga);
	}
	
	if(total_harga > 125000) {
		total_harga = total_harga - (total_harga * 0.25) - 5000;
		printf("Selamat anda mendapat diskon sebesar 25%% dan cashback sebesar 5000\n");
		printf("Total harga anda menjadi : %i\n", total_harga);
	}
	
	return 0;
}

