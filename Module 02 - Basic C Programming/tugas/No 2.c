#include <stdio.h>

int main(){
	//deklarasi
	char nama[50], prodi[50], fakultas[50];
	int nim;
	float praktikum, uts, uas, akhir;
	
	//Interface
	printf("Nama: ");
	fgets(nama, sizeof(nama), stdin);

	printf("NIM: ");
	scanf("%i", &nim);
	getchar();
	
	printf("Prodi: ");
	fgets(prodi, sizeof(prodi), stdin);
	
	printf("Fakultas: ");
	fgets(fakultas, sizeof(fakultas), stdin);

	printf("Nilai praktikum: ");
	scanf("%f", &praktikum);
	getchar();
	
	printf("Nilai UTS: ");
	scanf("%f", &uts);
	
	printf("Nilai UAS: ");
	scanf("%f", &uas);
	
	//operasi
	akhir = 0.3 * praktikum + 0.3 * uts + 0.4 * uas;
	printf("Nilai akhir anda adalah: %f\n", akhir);
	
	return 0;
}
