/*
    Nama: Dzaki Sultan Rabbani
    NIM: 23343035
    Prodi: Informatika
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void addData();
void displayData();

int main(){
    int choice;

    do{
        printf("\nMenu:\n");
        printf("1. Add Data\n");
        printf("2. Display Data\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%i", &choice);

        switch(choice){
            case 1:
                addData();
                break;
            case 2:
                displayData();
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please choose again.\n");
        }
    }while(choice != 3);

    return 0;
}

void addData(){
    FILE *file;
    char nama[25], jurusan[25], programStudi[25];
    int nim, mhsCount;

    file = fopen("dataMahasiswa.txt", "a");

    if(file == NULL){
        printf("Error opening file!\n");
        return;
    }

    printf("Jumlah mahasiswa yang ingin diinput: ");
    scanf("%i", &mhsCount);
    getchar();

    for (int i = 0; i < mhsCount; i++){
        printf("=====Mahasiswa ke-%i=====\n", i+1);
        printf("Nama: ");
        fgets(nama, sizeof(nama), stdin);
        printf("NIM: ");
        scanf("%i", &nim);
        getchar();
        printf("Jurusan: ");
        fgets(jurusan, sizeof(jurusan), stdin);
        printf("Program Studi: ");
        fgets(programStudi, sizeof(programStudi), stdin);

        fprintf(file, "=====Mahasiswa ke-%i=====\n", i+1);
        fprintf(file, "Nama: %s", nama);
        fprintf(file, "NIM: %i\n", nim);
        fprintf(file, "Jurusan: %s", jurusan);
        fprintf(file, "Program Studi: %s", programStudi);
        fprintf(file, "\n");
    }

    fclose(file);
}

void displayData(){
    FILE *file;
    char nama[25], jurusan[25], programStudi[25];
    int nim, mhsCount;

    file = fopen("dataMahasiswa.txt", "r");

    if(file == NULL){
        printf("Error opening file!\n");
        return;
    }

    printf("\n");

    while(fgets(nama, sizeof(nama), file)){
        printf("%s", nama);
        fgets(nama, sizeof(nama), file);
        printf("%s", nama);
        fgets(nama, sizeof(nama), file);
        printf("%s", nama);
        fgets(nama, sizeof(nama), file);
        printf("%s", nama);
        fgets(nama, sizeof(nama), file);
        printf("%s", nama);
    }

    fclose(file);
}