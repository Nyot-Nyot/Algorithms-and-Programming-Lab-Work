#include <stdio.h>

void add(int a, int b){
    printf("%d + %d = %d\n", a, b, a+b);
}

void main(){
    add(10, 20);
    add(30, 40);
    add(50, 60);
}