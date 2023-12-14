/*
    Nama: Dzaki Sultan Rabbani
    NIM: 23343035
    Prodi: Informatika
*/

#include <stdio.h>

void main(){
    //membuat variabel
    int umur = 19;
    float tinggi = 175.6;

    //membuat pointer
    int *pointer_umur = &umur;
    int *pointer2 = &umur;
    float *p_tinggi = &tinggi;

    //mencetak alamat memori variabel
    printf("Alamat memori variabel umur adalah : %d\n", &umur);
    printf("alamat memori variabel tinggi adalah %d\n", &tinggi);
    //mencetak referensi alamat memori variabel
    printf("Referensi alamat memori variabel *pointer_umur adalah : %d \n", pointer_umur);
    printf("Referensi alamat memori variabel *pointer2 adalah : %d\n", pointer2);
    printf("Referensi alamat memori variabel *p_tinggi adalah : %d\n", p_tinggi);

    //mencetak alamat memori pointer
    printf("\nAlamat memori pointer pointer_umur adalah: %d\n", &pointer_umur);
    printf("Alamat memori pointer pointer2 adalah: %d\n", &pointer2);
    printf("Alamat memori pointer p_tinggi adalah: %d\n", &p_tinggi);
}