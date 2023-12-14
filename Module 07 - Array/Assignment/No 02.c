/*
    Nama: Dzaki Sultan Rabbani
    NIM: 23343035
    Prodi: Informatika
*/

#include <stdio.h>

int main() {
    int jumlah_mahasiswa, i;

    printf("===================Daftar nama mahasiswa===================\n");
    printf("Jumlah mahasiswa: ");
    scanf("%i", &jumlah_mahasiswa);
    printf("------------------Masukkan nama mahasiswa------------------\n");

    char nama_mahasiswa[jumlah_mahasiswa][50];

    for (i = 0; i < jumlah_mahasiswa; i++) {
        printf("Nama mahasiswa ke-%i: ", i + 1);
        scanf("%[^\n]s", nama_mahasiswa[i]);
    }

    printf("-----------------------------------------\n");

    for (i = 0; i < jumlah_mahasiswa; i++) {
        printf("Nama mahasiswa ke-%i: %s\n", i + 1, nama_mahasiswa[i]);
    }

    return 0;
}
