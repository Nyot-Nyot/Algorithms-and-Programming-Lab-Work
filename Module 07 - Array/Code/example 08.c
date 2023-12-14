/*
    Nama: Dzaki Sultan Rabbani
    NIM: 23343035
    Prodi: Informatika
*/

#include <stdio.h>
#include <string.h>

void main(){
    char str1[] = "Agariandne";
    char str2[] = "Agariadne";
    int hasil;

    //membandingkan string
    hasil = strcmp(str1, str2);

    if (hasil == 0){
        printf("str1 dan str2 sama\n\n");
    } else {
        printf("str1 dan str2 berbeda\n\n");
    }
    
}