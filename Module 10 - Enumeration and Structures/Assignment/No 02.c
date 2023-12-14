#include <stdio.h>

typedef struct {
    int day;
    int month;
    int year;
} Date;

typedef struct {
    int start_day;
    int start_month;
    int end_day;
    int end_month;
    const char* name;
} Zodiac;

const Zodiac zodiacs[] = {
    { 21, 1, 19, 2, "AQUARIUS" },
    { 20, 2, 20, 3, "PISCES" },
    { 21, 3, 20, 4, "ARIES" },
    { 21, 4, 20, 5, "TAURUS" },
    { 21, 5, 21, 6, "GEMINI" },
    { 22, 6, 22, 7, "CANCER" },
    { 23, 7, 22, 8, "LEO" },
    { 23, 8, 22, 9, "VIRGO" },
    { 23, 9, 22, 10, "LIBRA" },
    { 23, 10, 21, 11, "SCORPIO" },
    { 22, 11, 21, 12, "SAGITTARIUS" },
    { 22, 12, 19, 1, "CAPRICORN" }
};

int get_zodiac_index(Date date) {
    int i;
    for (i = 0; i < sizeof(zodiacs) / sizeof(zodiacs[0]); i++) {
        if ((date.month == zodiacs[i].start_month && date.day >= zodiacs[i].start_day) ||
            (date.month == zodiacs[i].end_month && date.day <= zodiacs[i].end_day)) {
            return i;
        }
    }
    return -1; // Tanggal invalid
}

int main() {
    Date birth_date;
    printf("Tanggal lahir Anda [date-month-year]: ");
    scanf("%d-%d-%d", &birth_date.day, &birth_date.month, &birth_date.year);

    int zodiac_index = get_zodiac_index(birth_date);
    if (zodiac_index != -1) {
        printf("Zodiak Anda adalah: %s\n", zodiacs[zodiac_index].name);
    } else {
        printf("Tanggal invalid!\n");
    }

    return 0;
}
