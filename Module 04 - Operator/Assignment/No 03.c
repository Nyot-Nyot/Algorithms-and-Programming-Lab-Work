/*
    Nama: Dzaki Sultan Rabbani
    NIM: 23343035
    Prodi: Informatika
*/

#include <stdio.h>

int main(){
    //deklarasi
    int presensi, praktek, uts, uas;
    float akhir;

    //interface
    printf("Kalkulator Nilai Akhir :)\n");
    printf("-------------------------------------------\n");
    printf("Masukkan nilai presensi: ");
    scanf("%d", &presensi);
    printf("Masukkan nilai praktek: ");
    scanf("%d", &praktek);
    printf("Masukkan nilai UTS: ");
    scanf("%d", &uts);
    printf("Masukkan nilai UAS: ");
    scanf("%d", &uas);

    //statement
    akhir = (presensi * 0.1) + (praktek * 0.2) + (uts * 0.3) + (uas * 0.4);

    //output
    printf("-------------------------------------------\n");
    printf("Nilai Akhir Anda adalah: %.2f\n", akhir);

    return 0;
}

