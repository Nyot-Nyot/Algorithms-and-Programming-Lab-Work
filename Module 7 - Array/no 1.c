#include <stdio.h>

int main(){
    // Deklarasi
    int jumlah_siswa, i;
    float nilai_total = 0.0;

    // Interface
    printf("===========Nilai rata-rata siswa===========\n");
    printf("Masukkan jumlah siswa: ");
    scanf("%i", &jumlah_siswa);

    int nilai_siswa[jumlah_siswa];
    char nama_siswa[jumlah_siswa][50];

    // Operasi
    for (i = 0; i < jumlah_siswa; i++) {
        printf("Nama siswa ke-%i: ", i+1);
        getchar();
        fgets(nama_siswa[i], sizeof(nama_siswa[i]), stdin);
        printf("Nilai siswa %s: ", nama_siswa[i]);
        scanf("%i", &nilai_siswa[i]);
        nilai_total += nilai_siswa[i];
    }

    float rata_rata = (float)nilai_total / (float)jumlah_siswa;

    // Output
    printf("Nilai rata-rata dari kelas ini adalah: %.2f", rata_rata);

    return 0;
}
