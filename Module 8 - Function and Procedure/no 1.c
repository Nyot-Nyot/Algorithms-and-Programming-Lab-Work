#include <stdio.h>

int Perkalian(int num1, int num2);

int main() {
    int num1, num2, hasil;

    printf("=============Kalkulator Perkalian Rekursif=============\n");
    printf("Angka pertama: ");
    scanf("%i", &num1);
    printf("Angka kedua: ");
    scanf("%i", &num2);

    hasil = Perkalian(num1, num2);

    printf("hasil: %i\n", hasil);

    return 0;
}

int Perkalian(int num1, int num2) {
    if (num2 == 0) {
        return 0;
    } else if (num2 > 0) {
        return num1 + Perkalian(num1, num2 - 1);
    } else {
        return -Perkalian(num1, -num2);
    }
}