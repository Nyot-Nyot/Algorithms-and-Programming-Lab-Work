#include <stdio.h>

void say_hello(char name[]){
    printf("Hello %s!\n", name);
}

void main(){
    say_hello("Dzaki");
    say_hello("Sultan");
    say_hello("Rabbani");
}