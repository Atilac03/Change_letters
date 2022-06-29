#include "src.h"
#include <stdio.h>

static const char *usage =
    "USAGE\n"
    "\t./change_letters mot\n"
    "\nDESCRIPTION\n"
    "\tLis le mot à transformer passé en paramètre et le transforme le plus\n"
    "\trapidement possible de façon à ce qu'il ne comporte qu'une seule lettre\n";

int help(char *av1, int ac)
{
    if (ac == 2) {
        if (av1[0] == '-' && av1[1] == 'h' && av1[2] == '\0') {
            printf("%s", usage);
            return 1;
        }
    }
    return 0;
}
