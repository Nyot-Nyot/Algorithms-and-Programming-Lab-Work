/*
    Nama: Dzaki Sultan Rabbani
    NIM: 23343035
    Prodi: Informatika
*/

#include <stdio.h>
int sum(int n);

void main(){
    int number, result;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    result = sum(number);

    printf("sum = %d\n", result);
}

int sum(int num){
    if (num != 0){
        return num + sum(num-1);
    } else {
        return num;
    }
    
}
