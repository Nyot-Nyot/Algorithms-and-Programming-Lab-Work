/*
    Nama: Dzaki Sultan Rabbani
    NIM: 23343035
    Prodi: Informatika
*/

#include <stdio.h>

int main(){
    //deklarasi
    int jam, total, harga = 15000;
    char film[50];
    
    //interface
    printf("Rental Film Dzaki\n");
    printf("----------------------------------------------\n");
    printf("Harga rental 1 jam = Rp 15.000\n");
    printf("dan jika rental lebih dari 1 jam, harga rental untuk jam berikutnya hanya setengah harga\n");
    printf("----------------------------------------------\n");
    printf("Film apa yang ingin anda rental? : ");
    scanf("%[^\n]s", film);
    printf("Berapa jam anda ingin rental film? : ");
    scanf("%i", &jam);
    
    //operasi
    if (jam > 1) {
        total = (jam - 1) * (harga / 2) + harga;
    } else {
        total = harga;
    }
    
    //output
    printf("total harga : %i", total);
    
    return 0;
}

