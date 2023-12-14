/*
    Nama: Dzaki Sultan Rabbani
    NIM: 23343035
    Prodi: Informatika
*/

#include <stdio.h>

void main(){
    char ulangi;
    int counter = 0;

    //perulangan while
    while(ulangi == 'y' || ulangi == 'Y'){
        printf("Apakah kamu mau mengulang?\n");
        printf("Jawab (y/t): ");
        scanf(" %c", &ulangi);

        //increment counter
        counter++;
    }

    printf("\n\n-------------------------\n");
    printf("Perulangan selesai!\n");
    printf("Anda telah mengulang %d kali.\n", counter);
}