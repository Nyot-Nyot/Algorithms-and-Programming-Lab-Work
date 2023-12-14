/*
    Nama: Dzaki Sultan Rabbani
    NIM: 23343035
    Prodi: Informatika
*/

#include <stdio.h>

int main(){
    //deklarasi
    int total_detik;
    int jam, menit, detik, sisa;

    //Interface
    printf("Konverter dari total detik ke format waktu (jam:menit:detik)\n");
    printf("--------------------------------------------\n");
    printf("Masukkan total detik: ");
    scanf("%d", &total_detik);

    //statement
    jam = total_detik / 3600;
    sisa = total_detik % 3600;
    menit = sisa / 60;
    detik = sisa % 60;

    //output
    printf("Waktu Anda adalah = %02d : %02d : %02d\n", jam, menit, detik);

    return 0;
}

