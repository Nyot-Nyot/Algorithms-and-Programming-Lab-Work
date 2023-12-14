/*
    Nama: Dzaki Sultan Rabbani
    NIM: 23343035
    Prodi: Informatika
*/

#include <stdio.h>

void main(){
    //membuat array kosong
    int nilai[5];

    //mengisi array
    nilai[0] = 32;
    nilai[1] = 12;
    nilai[2] = 45;
    nilai[3] = 23;
    nilai[4] = 11;

    //mencetak isi array dengan perulangan
    for(int i = 0; i < 5; i++){
        printf("nilai[%d] = %d\n", i + 1, nilai[i]);
    }
}