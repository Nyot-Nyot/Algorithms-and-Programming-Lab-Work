/*
    Nama: Dzaki Sultan Rabbani
    NIM: 23343035
    Prodi: Informatika
*/

#include <stdio.h>
#include <string.h>

#define MAX_mahasiswa 100

struct Mahasiswa {
    int npm;
    char nama[25];
    char tanggalLahir[11];
    char alamat[25];
    int hp;
};

int main() {
    struct Mahasiswa mahasiswa[MAX_mahasiswa];
    int jmlMahasiswa = 0;
    char pilihan;

    do {
        printf("NPM: ");
        scanf("%d", &mahasiswa[jmlMahasiswa].npm);
        getchar();

        printf("NAMA: ");
        fgets(mahasiswa[jmlMahasiswa].nama, sizeof(mahasiswa[jmlMahasiswa].nama), stdin);
        mahasiswa[jmlMahasiswa].nama[strcspn(mahasiswa[jmlMahasiswa].nama, "\n")] = '\0';

        printf("TANGGAL LAHIR (DD-MM-YYYY): ");
        scanf("%s", mahasiswa[jmlMahasiswa].tanggalLahir);
        getchar();

        printf("ALAMAT: ");
        fgets(mahasiswa[jmlMahasiswa].alamat, sizeof(mahasiswa[jmlMahasiswa].alamat), stdin);
        mahasiswa[jmlMahasiswa].alamat[strcspn(mahasiswa[jmlMahasiswa].alamat, "\n")] = '\0';

        printf("HP: ");
        scanf("%d", &mahasiswa[jmlMahasiswa].hp);
        getchar();

        jmlMahasiswa++;

        printf("Mau memasukkan data lagi? [y/n]: ");
        scanf("%c", &pilihan);
        getchar();
    } while (pilihan == 'y' || pilihan == 'Y');

    printf("\nData Mahasiswa:\n");
    for (int i = 0; i < jmlMahasiswa; i++) {
        printf("%-12d%-25s%-15s%-15s%d\n", mahasiswa[i].npm, mahasiswa[i].nama, mahasiswa[i].tanggalLahir, mahasiswa[i].alamat, mahasiswa[i].hp);
    }

    return 0;
}
