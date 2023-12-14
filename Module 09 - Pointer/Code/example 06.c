/*
    Nama: Dzaki Sultan Rabbani
    NIM: 23343035
    Prodi: Informatika
*/

#include <stdio.h>

void add_score(int *score){
    *score = *score + 5;
    printf("Skor telah diperbarui ke %d\n", *score);
}

void main(){
    int score = 0;

    printf("Skor sebelumnya : %d\n", score);
    add_score(&score);
    printf("\nSkor setelah diubah : %d\n", score);
}