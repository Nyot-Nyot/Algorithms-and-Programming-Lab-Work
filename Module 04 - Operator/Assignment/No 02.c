/*
    Nama: Dzaki Sultan Rabbani
    NIM: 23343035
    Prodi: Informatika
*/

#include <stdio.h>

int main(){
    //deklarasi
    char nama_pembeli[50], nama_barang[50];
    float harga_barang, jumlah_barang, harga_total; 

    //interface
    printf("Terima Kasih sudah berbelanja\n");
    printf("Masukkan data Anda\n");
    printf("-----------------------------------------------\n");
    printf("Nama Pembeli: ");
    scanf(" %[^\n]s", nama_pembeli);
    printf("Nama Barang: ");
    scanf(" %[^\n]s", nama_barang);
    printf("Harga Barang: ");
    scanf("%f", &harga_barang);
    printf("Jumlah barang: ");
    scanf("%f", &jumlah_barang);

    //statement
    harga_total = harga_barang * jumlah_barang;

    //output
    printf("--------------------------------\n");
    printf("Harga Total: Rp %.2f\n", harga_total);

    return 0;
}

