/*
    Nama: Dzaki Sultan Rabbani
    NIM: 23343035
    Prodi: Informatika
*/

#include <stdio.h>

int main(){
    int nilai;
    char grade;

    printf("=== Prograam Grade Nilai ===\n");
    printf("Inputkan Nilai: ");
    scanf("%d", &nilai);

    //menggunakan percabangan if/else/if
    if (nilai >= 90){
        grade = 'A';
    } else if (nilai >= 80){
        grade = 'B';
    } else if (nilai >= 70){
        grade = 'C';
    } else if (nilai >= 60){
        grade = 'D';
    } else if (nilai >= 50){
        grade = 'E';
    } else {
        grade = 'F';
    }
    
    printf("Nilai: %i\n", nilai);
    printf("Grade: %c\n", grade);

    return 0;
}
