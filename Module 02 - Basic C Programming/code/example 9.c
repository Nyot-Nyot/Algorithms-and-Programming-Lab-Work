#include <stdio.h>

int main(){
    char nama[20], web_address[30];

    printf("Nama: ");
    scanf("%[^\n]s", &nama);

    printf("\nAlamat web: ");
    scanf("%s", &web_address);

    printf("\n-------------------------------------\n");
    printf("Nama yang diinputkan: %s", nama);
    printf("Alamat web yang diinputkan: %s", web_address);

    return 0;
}