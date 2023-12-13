/*
    Nama: Dzaki Sultan Rabbani
    NIM: 23343035
    Prodi: Informatika
*/

#include <stdio.h>

int main(){
    char nama[50];
    
    printf("Halo, siapa nama lengkapmu? \n");
    printf("Nama: ");
    scanf("%[^\n]s", &nama);
    
    printf("Selamat datang %s dalam Pemograman C!\n", &nama);
    
    printf("\n\nBy: Dzaki Sultan Rabbani\n");

    return 0;
}
