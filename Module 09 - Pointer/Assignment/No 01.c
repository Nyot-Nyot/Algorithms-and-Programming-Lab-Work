/*
    Nama: Dzaki Sultan Rabbani
    NIM: 23343035
    Prodi: Informatika
*/

#include <stdio.h>
#include <string.h>

int main() {
    char text[25];

    printf("Enter the text: ");
    scanf("%[^\n]", text);

    int length = strlen(text);
    char* ptr = text + length - 1;

    for (; ptr >= text; ptr--) {
        char* subPtr = ptr;
        while (*subPtr != '\0') {
            printf("%c", *subPtr);
            subPtr++;
        }
        printf("\n");
    }

    return 0;
}
