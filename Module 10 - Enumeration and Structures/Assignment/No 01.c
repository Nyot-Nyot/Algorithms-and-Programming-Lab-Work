/*
    Nama: Dzaki Sultan Rabbani
    NIM: 23343035
    Prodi: Informatika
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_RANDOM_NUMBER 20

typedef struct {
    int random_number;
    int tries;
} Game;

void reset_game(Game* game);
void play(Game* game);
int get_guess();
void display_message(const char* message);
void ask_play_again(Game* game);

void play(Game* game) {
    while (1) {
        int guess = get_guess();

        if (guess < game->random_number) {
            display_message("Angka saya lebih besar!\n");
        } else if (guess > game->random_number) {
            display_message("Angka saya lebih kecil!\n");
        } else {
            display_message("Selamat, Anda benar!\n");
            break;
        }
        game->tries++;
    }

    printf("Jumlah percobaan: %i\n", game->tries);
    ask_play_again(game);
}

int get_guess() {
    int guess;
    printf("Masukkan tebakan Anda: ");
    scanf("%d", &guess);
    return guess;
}

void display_message(const char* message) {
    printf("%s\n", message);
}

void ask_play_again(Game* game) {
    char play_again;
    printf("Apakah Anda ingin bermain lagi? (y/n): ");
    scanf(" %c", &play_again);
    printf("===============================\n");
    if (play_again == 'y' || play_again == 'Y') {
        reset_game(game);
        play(game);
    } else {
        display_message("Terima kasih telah bermain!");
    }
}

void reset_game(Game* game) {
    srand(time(NULL));
    game->random_number = rand() % MAX_RANDOM_NUMBER + 1;
    game->tries = 0;
}

int main() {
    Game game;
    reset_game(&game);
    play(&game);
    return 0;
}
