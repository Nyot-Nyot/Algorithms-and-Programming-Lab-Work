#include <stdio.h>
#include <string.h>

int main() {
    char name[25];

    printf("Enter the text: ");
    scanf("%[^\n]", name);

    int length = strlen(name);
    char* ptr = name + length - 1;

    for (; ptr >= name; ptr--) {
        printf("%c", *ptr);
    }
    printf("\n\n");
    
    return 0;
}
