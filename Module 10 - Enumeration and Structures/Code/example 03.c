/*
    Nama: Dzaki Sultan Rabbani
    NIM: 23343035
    Prodi: Informatika
*/

#include <stdio.h>

//membuat struct
struct Mahasiswa {
    char *name;
    char *address;
    int age;
};

void main(){
    //menggunakan struct
    struct Mahasiswa mhs1, mhs2;

    //mengisi nilai ke struct
    mhs1.name = "Dzaki";
    mhs1.address = "Padang";
    mhs1.age = 19;

    mhs2.name = "Bambang";
    mhs2.address = "Padang";
    mhs2.age = 25;

    //mencetak isi struct
    printf("## Mahasiswa 1 ##\n");
    printf("Nama : %s\n", mhs1.name);
    printf("Alamat : %s\n", mhs1.address);
    printf("Umur : %d\n\n", mhs1.age);
    
    printf("## Mahasiswa 2 ##\n");
    printf("Nama : %s\n", mhs2.name);
    printf("Alamat: %s\n", mhs2.address);
    printf("Usia : %d\n", mhs2.age);
}