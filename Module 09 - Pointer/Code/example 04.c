#include <stdio.h>

void main(){
    //membuat variabel score
    int score = 0;

    //membuat pointer dan referensikan dengan alamat dari variabel score
    int *ptr_score = &score;

    //mengakses data variabel score dari pointer
    printf("Nilai score diakses dari ptr score adalah %d\n", *ptr_score);
    printf("Nilai awal variabel score adalah %d\n", score);

    //mengubah data variabel score dari pointer
    *ptr_score = 85;

    //melihat isi variabel score
    printf("\nNilai score setelah diubah adalah %d\n", score);
}