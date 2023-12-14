/*
    Nama: Dzaki Sultan Rabbani
    NIM: 23343035
    Prodi: Informatika
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#define KAPASITAS_SERVER 50

typedef struct {
    char username[25];
    char email[25];
    char password[25];
} User;

typedef struct {
    User users[KAPASITAS_SERVER];
    int size;
} Database;

void addUser(Database* db, User user) {
    if (db->size < KAPASITAS_SERVER) {
        db->users[db->size] = user;
        db->size++;
    } else {
        printf("kapasitas server penuh :(\n\n");
    }
}

bool isDuplicate(Database* db, char* username, char* email) {
    for (int i = 0; i < db->size; i++) {
        if (strcmp(db->users[i].username, username) == 0 || strcmp(db->users[i].email, email) == 0) {
            return true;
        }
    }
    return false;
}

int main() {
    Database db;
    db.size = 0;

    char username_sign_in[50];
    char email_sign_in[50];
    char password_sign_in[50];

    int menu;
    int logged_in_status = 0;

    //judul
    printf(" _    _ _____ _     _____ ________  ___ _____ \n");
    printf("| |  | |  ___| |   /  __ \\  _  |  \\/  ||  ___|\n");
    printf("| |  | | |__ | |   | /  \\/ | | | .  . || |__  \n");
    printf("| |/\\| |  __|| |   | |   | | | | |\\/| ||  __| \n");
    printf("\\  /\\  / |___| |___| \\__/\\ \\_/ / |  | || |___ \n");
    printf(" \\/  \\/\\____/\\_____/\\____/\\___/\\_|  |_/\\____/ \n\n");

    while (menu != 3) {
        printf("menu:\n1). sign up\n2). sign in\n");
        printf("Pilihan: ");
        scanf("%d", &menu);


        switch (menu) {
            case 1: {
                printf("==========Sign up==========\n");
                User user;
                printf("Username: ");
                scanf("%s", user.username);
                printf("Email: ");
                scanf("%s", user.email);
                printf("Password: ");
                scanf("%s", user.password);
                printf("\n");

                if (isDuplicate(&db, user.username, user.email)) {
                    printf("Email yg dimaksud sudah dipakai.\nSign in atau gunakan akun lain\n\n");
                } else {
                    addUser(&db, user);
                }
                break;
            }

            case 2: {
                printf("==========Sign in==========\n");
                printf("Username: ");
                scanf("%s", username_sign_in);
                printf("Email: ");
                scanf("%s", email_sign_in);
                printf("Password: ");
                scanf("%s", password_sign_in);
                printf("\n");

                bool login_berhasil = false;

                for (int i = 0; i < db.size; i++) {
                    if (strcmp(db.users[i].username, username_sign_in) == 0 && strcmp(db.users[i].email, email_sign_in) == 0 && strcmp(db.users[i].password, password_sign_in) == 0) {
                        printf("Selamat datang %s :)\nLogin berhasil\n\n", username_sign_in);
                        login_berhasil = true;
                        logged_in_status = 1;
                        break;
                    }
                }

                if (!login_berhasil) {
                    printf("email atau password salah\n\n");               
                }

                //flush isi variabel username, email, dan password penguji
                for (int i = 0; i < 50; i++){
                    username_sign_in[i] = 0;
                    email_sign_in[i] = 0;
                    password_sign_in[i] = 0;
                }
                break;
            }

            case 3:
                printf("Terima kasih\n\n");
                break;

            default:
                printf("Pilihan invalid :(\n");
                break;
        }

        if (logged_in_status == 1){
            break;
        }       
    }

    return 0;
}
