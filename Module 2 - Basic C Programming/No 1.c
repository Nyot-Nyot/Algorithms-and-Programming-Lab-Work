#include <stdio.h>

int main(){
    char nama[50];
    
    printf("Halo, siapa nama lengkapmu? \n");
    printf("Nama: ");
    scanf("%[^\n]s", &nama);
    
    printf("Selamat datang %s dalam Pemograman C!", &nama);
    
    return 0;
}
