#include <stdio.h>
#include <string.h>

void main(){
    //membuat array karakter untuk menyimpan password
    char password[30];

    printf("==== Program Login ====\n");
    printf("Masukkan password: ");
    scanf("%s", password);

    //percabangan if/else
    if (strcmp(password, "kopi") == 0){
        printf("Password benar!\n");
    } else{
        printf("Password salah!\n");
    }
    
    printf("Terimakasih sudah menggunakan aplikasi ini\n");
}