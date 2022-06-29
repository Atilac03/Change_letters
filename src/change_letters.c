#include "src.h"
#include <stdio.h>
#include <stdbool.h>

char *change_more_cons(char *str, struct time *mytime, char letter)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (is_vowel(str[i]) == 1 && str[i] != letter) {
            mytime->seconds += 2;
            str[i] = letter;
        } else if (str[i] != letter) {
            str[i] = letter;
            mytime->seconds++;
        }
    }
    return str;
}

char *change_more_vowels(char *str, struct time *mytime, char letter)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (is_vowel(str[i]) == 0 && str[i] != letter) {
            mytime->seconds += 2;
            str[i] = letter;
        } else if (str[i] != letter) {
            mytime->seconds++;
            str[i] = letter;
        }
    }
    return str;
}

char *change_mono(char *str, int is_vowel, struct time *mytime)
{
    if (is_vowel == true) {
        for (int i = 0; str[i] != '\0'; i++) {
            str[i] = 'Z';
            mytime->seconds++;
        }
    } else if (is_vowel == false) {
        for (int i = 0; str[i] != '\0'; i++) {
            str[i] = 'A';
            mytime->seconds++;
        }
    }
    return str;
}

int change_letters(char *str)
{
    struct time mytime;
    int ret = 0;
    mytime.seconds = 0;
    ret = is_more_vowels(str);
    if (ret == 1) {
        char most_used = find_letter(str, false);
        str = change_more_vowels(str, &mytime, most_used);
    } else if (ret == 0) {
        char most_used = find_letter(str, true);
        str = change_more_cons(str, &mytime, most_used);
    } else if (ret == 2)
        str = change_mono(str, false, &mytime);
    else
        str = change_mono(str, true, &mytime);
    printf("\"%s\", fait en %i secondes\n", str, mytime.seconds);
    return 0;
}
