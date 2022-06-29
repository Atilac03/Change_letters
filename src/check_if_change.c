#include <stdio.h>
#include <string.h>
#include "src.h"

int check_if_change(char *str)
{
    int len = strlen(str);
    if (len == 1) {
        printf("\"%c\", fait en 0 secondes\n", str[0]);
        return 1;
    } else {
        char letter = str[0];
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] != letter)
                return 0;
        }
        printf("\"%s\", fait en 0 secondes\n", str);
        return 1;
    }
    return 0;
}
