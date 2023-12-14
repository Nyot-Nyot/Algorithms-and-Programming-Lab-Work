/*
    Nama: Dzaki Sultan Rabbani
    NIM: 23343035
    Prodi: Informatika
*/

#include <stdio.h>

int main(){
	//deklarasi
	char nama[25], prodi[25];
	int kehadiran, tugas, uts, uas ;
	float akhir;
	
	//interface
	printf("Hasil Kelulusan Mahasiswa\n");
	printf("---------------------------------------------\n");
	printf("Nama: ");
	scanf("%[^\n]s", &nama);
	printf("Prodi: ");
	scanf("%s", &prodi);
	printf("Nilai kehadiran: ");
	scanf("%i", &kehadiran);
	printf("Nilai tugas: ");
	scanf("%i", &tugas);
	printf("Nilai UTS: ");
	scanf("%i", &uts);
	printf("Nilai UAS: ");
	scanf("%i", &uas);
	
	//statement
	akhir = (kehadiran * 0.2) + (tugas * 0.2) + (uts * 0.25) + (uas * 0.35);
	printf("Nilai akhir = %f\n", akhir);
	
	if(akhir >= 0 && akhir < 45) {
		printf("Anda mendapat nilai: E\n");
		printf("Maaf, anda tidak lulus!\n");
	}
	else if (akhir >= 45 && akhir < 56){
		printf("Anda mendapat nilai: D\n");
		printf("Maaf, anda tidak lulus\n");
	}
	else if (akhir >= 56 && akhir < 66){
		printf("Anda mendapat nilai: C\n");
		printf("Anda lulus, tingkatkan lagi untuk kedepannya!\n");
	}
	else if (akhir >= 66 && akhir < 76){
		printf("Anda mendapat nilai: B-\n");
		printf("Anda lulus dengan baik, tingkatkan terus belajarnya!\n");
	}
	else if (akhir >= 76 && akhir < 81){
		printf("Anda mendapat nilai: B\n");
		printf("Anda lulus dengan baik, tingkatkan terus belajarnya!\n");
	}
	else if (akhir >= 81 && akhir < 86){
		printf("Anda mendapat nilai: B+\n");
		printf("Anda lulus dengan baik, tingkatkan terus belajarnya!\n");
	}
	else if (akhir >= 86 && akhir < 91){
		printf("Anda mendapat nilai: A-\n");
		printf("Selamat! Anda lulus dengan nilai yang sangat memuaskan!\n");
	}
	else{
		printf("Anda mendapat nilai: A\n");
		printf("Selamat! Anda lulus dengan nilai yang sangat memuaskan!\n");
	}

	return 0;
}
