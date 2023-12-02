#include <stdio.h>

int main(){
    int a, b, c;

    printf("Inputkan nilai a: ");
    scanf("%i", &a);

    printf("Inputkan nilai b: ");
    scanf("%i", &b);

    c = a + b;

    printf("Hasil %i + %i = %i", a, b, c);

    return 0;
}