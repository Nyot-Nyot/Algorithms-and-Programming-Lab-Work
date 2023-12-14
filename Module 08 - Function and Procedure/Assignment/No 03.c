/*
    Nama: Dzaki Sultan Rabbani
    NIM: 23343035
    Prodi: Informatika
*/

#include <stdio.h>
#define PI 3.14159

void circle_area();
void circle_circumference();

int main() {
    int option;

    printf("============Circle Calculator============\n");
    printf("Menu:\n1). Calculate the circle area\n2). Calculate the circumference of a circle\n");
    printf("Select: ");
    scanf("%i", &option);

    switch (option) {
        case 1:
            circle_area();
            break;

        case 2:
            circle_circumference();
            break;

        default:
            printf("Your input is invalid\n");
            break;
    }

    return 0;
}

void circle_area() {
    double radius, result;

    printf("Enter the radius: ");
    scanf("%lf", &radius);

    result = PI * radius * radius;

    printf("The area is %lf\n", result);
}

void circle_circumference() {
    double radius, result;

    printf("Enter the radius: ");
    scanf("%lf", &radius);

    result = 2 * PI * radius;

    printf("The circumference is %lf\n", result);
}
