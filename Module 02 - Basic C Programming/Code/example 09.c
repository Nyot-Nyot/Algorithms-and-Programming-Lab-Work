/*
    Nama: Dzaki Sultan Rabbani
    NIM: 23343035
    Prodi: Informatika
*/

#include <stdio.h>

int main(){
    char nama[20], web_address[30];

    printf("Nama: ");
    scanf("%[^\n]s", nama);

    printf("Alamat web: ");
    scanf("%s", web_address);

    printf("\n-------------------------------------\n");
    printf("Nama yang diinputkan: %s\n", nama);
    printf("Alamat web yang diinputkan: %s\n", web_address);

    return 0;
}