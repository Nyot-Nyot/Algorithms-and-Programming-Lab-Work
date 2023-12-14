/*
    Nama: Dzaki Sultan Rabbani
    NIM: 23343035
    Prodi: Informatika
*/

#include <stdio.h>

void print_header() {
    printf(" _____  ______ _____ ______ _____ _____ _______ _____ \n");
    printf("|  __ \\|  ____/ ____|  ____|_   _|  __ \\__   __/ ____|\n");
    printf("| |__) | |__ | |    | |__    | | | |__) | | | | (___  \n");
    printf("|  _  /|  __|| |    |  __|   | | |  ___/  | |  \\___ \\ \n");
    printf("| | \\ \\| |___| |____| |____ _| |_| |      | |  ____) |\n");
    printf("|_|  \\_\\______\\_____|______|_____|_|      |_| |_____/ \n");
    printf("======================================================\n\n");
}

int calculate_discount(int total) {
    if (total > 3000000) {
        return total * 0.35;
    } else if (total > 1000000 && total <= 3000000) {
        return total * 0.2;
    } else {
        return 0;
    }
}

int main() {
    char name[25];
    char product_name[50][25];
    int item_type, price, total = 0;

    print_header();

    printf("Name: ");
    scanf("%24[^\n]", name);
    printf("Item type: ");
    scanf("%i", &item_type);

    for (int i = 0; i < item_type; i++) {
        printf("Product name: ");
        scanf(" %24[^\n]", product_name[i]);
        printf("Price: ");
        scanf("%i", &price);
        total += price;
    }

    printf("======================================================\n");
    printf("Total = %i\n\n", total);

    int discount = calculate_discount(total);
    int discountedPrice = total - discount;

    if (discount > 0) {
        printf("Congratulations %s, you got a %i%% discount\n", name, (discount * 100) / total);
        printf("Price after discount = %i\n", discountedPrice);
    } else {
        printf("No discount available\n");
    }

    printf("Thank you :)\n");

    return 0;
}
