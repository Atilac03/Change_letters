#include "src.h"
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int is_vowel(char c)
{
    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y')
        return 1;
    return 0;
}

int is_more_vowels(char *str)
{
    int count = 0;
    int len = strlen(str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (is_vowel(str[i]) == 1)
            count++;
    }
    if (count == 0)
        return 2;
    if (count == len)
        return 3;
    if (len / 2 + len % 2 <= count)
        return 1;
    return 0;
}

int count_occ(char *str, char c, int i)
{
    int count = 0;
    for (; i >= 0; i--) {
        if (str[i] == c)
            count++;
    }
    return count;
}

char find_letter(char *str, int find_vowels)
{
    int repeated = 0;
    int tmp = 0;
    char letter;
    for (int i = 0; str[i] != '\0'; i++) {
        if (find_vowels == is_vowel(str[i])) {
            tmp = count_occ(str, str[i], i);
            if (tmp > repeated) {
                repeated = tmp;
                letter = str[i];
            }
        }
    }
    return letter;
}
