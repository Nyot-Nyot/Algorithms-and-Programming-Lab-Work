/*
    Nama: Dzaki Sultan Rabbani
    NIM: 23343035
    Prodi: Informatika
*/

#include <stdio.h>

enum hari {SENIN, SELASA, RABU, KAMIS, JUMAT, SABTU, MINGGU};

void main(){
    enum hari sekarang;
    sekarang = RABU;
    printf("Sekarang hari ke-%d\n", sekarang + 1);
}