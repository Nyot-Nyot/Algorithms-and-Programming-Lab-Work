/*
    Nama: Dzaki Sultan Rabbani
    NIM: 23343035
    Prodi: Informatika
*/

#include <stdio.h>

void main(){
    char ulangi = 'y';
    int counter = 0;

    do{
        printf("Apakah kamu mau mengulang?\n");
        printf("jawab (y/t): ");
        scanf(" %c", &ulangi);

        //increment counter
        counter++;
    }while(ulangi == 'y');

    printf("\n\n-------------------------\n");
    printf("Perulangan selesai!\n");
    printf("Anda telah mengulang %d kali.\n", counter);
}