/*
    Nama: Dzaki Sultan Rabbani
    NIM: 23343035
    Prodi: Informatika
*/

#include <stdio.h>

void main(){
    char buff[255];
    char text[255];
    FILE *fptr;

    //membuka file untuk ditulis
    fptr = fopen("puisi.txt", "w");

    //mengambil input dari user
    printf("Inputkan isi file: ");
    fgets(text, sizeof(text), stdin);

    //menulis ke text file
    fputs(text, fptr);

    printf("File berhasil ditulis\n");

    //tutup file setelah ditulis
    fclose(fptr);

    //buka kembali file untuk dibaca
    fptr = fopen("puisi.txt", "r");

    //baca isi file dengan gets lalu simpan ke buff
    while (fgets(buff, sizeof(buff), fptr)) {
        printf("%s", buff);
    }

    //tutup file
    fclose(fptr);
}