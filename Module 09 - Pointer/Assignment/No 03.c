#include <stdio.h>

int main(){
    printf("=======Number 3 part A=======\n");
    int Lesley = 57082;
    int Layla = Lesley;
    int Balmond = Layla + 1;

    printf("Lesley = %i", Lesley);
    printf("\nLayla = %i", Layla);
    printf("\nBalmond = %i\n\n", Balmond);

    printf("=======Number 3 part B=======\n");
    int *Layla_B = &Lesley;
    int Balmond_B = *Layla_B + 1;

    printf("Lesley = %i", Lesley);
    printf("\nLayla = %p", Layla_B);
    printf("\nBalmond = %i\n\n", Balmond_B);

    return 0;
}