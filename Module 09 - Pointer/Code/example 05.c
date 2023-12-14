#include <stdio.h>

void add_score(int score){
    score += 5;
    //menampilkan status score setelah diubah
    printf("Score setelah diubah di fungsi add_score: %d\n", score);
}

void main(){
    int score = 0;

    printf("Score sebelum diubah : %d\n", score);
    add_score(score);
    printf("Score setelah diubah : %d\n", score);
}