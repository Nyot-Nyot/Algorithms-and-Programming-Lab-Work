#include <stdio.h>
#include <ctype.h>

void main(){
    char grade;

    printf("Inputkan grade: ");
    scanf("%c", &grade);

    switch (toupper(grade)){
        case 'A':
            printf("Luar biasa!\n");
            break;

        case 'B':
            printf("Bagus sekali!\n");
            break;

        case 'C':
            printf("Bagus");
            break;

        case 'D':
            printf("Anda lulus\n");
            break;

        case 'E':
            printf("Anda gagal!\n");

        case 'F':
            printf("Sampah masyarakat!!!!\n");
            break;

        default:
            printf("Grade salah!\n");
            break;
    }
}