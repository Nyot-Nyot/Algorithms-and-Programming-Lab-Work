/*
    Nama: Dzaki Sultan Rabbani
    NIM: 23343035
    Prodi: Informatika
*/

#include <stdio.h>

int multiplication(int num1, int num2);
int division(int num1, int num2);
int addition(int num1, int num2);
int subtraction(int num1, int num2);

int main() {
    int num1, num2, result;
    char symbol;

    printf("=================Simple Calculator=================\n");
    printf("Enter the expression: ");
    scanf("%i %c %i", &num1, &symbol, &num2);

    switch (symbol) {
        case '*':
            result = multiplication(num1, num2);
            printf("%i * %i = %i\n", num1, num2, result);
            break;

        case '/':
            result = division(num1, num2);
            printf("%i / %i = %i\n", num1, num2, result);
            break;

        case '+':
            result = addition(num1, num2);
            printf("%i + %i = %i\n", num1, num2, result);
            break;

        case '-':
            result = subtraction(num1, num2);
            printf("%i - %i = %i\n", num1, num2, result);
            break;

        default:
            printf("Operasi tidak dapat dilakukan :(\n");
            break;
    }

    return 0;
}

int multiplication(int num1, int num2) {
    return num1 * num2;
}

int division(int num1, int num2) {
    return num1 / num2;
}

int addition(int num1, int num2) {
    return num1 + num2;
}

int subtraction(int num1, int num2) {
    return num1 - num2;
}
