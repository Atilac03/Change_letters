#include "src.h"
#include <stdio.h>
#include <unistd.h>

int main(int ac, char **av)
{
    if (ac != 2) {
        printf("Entrez un mot à transformer\n\"%s -h\" pour avoir de l'aide\n", av[0]);
        return 84;
    } else if (help(av[1], ac) == 1)
        return 0;
    if (check_if_change(av[1]) == 1)
        return 0;
    return (change_letters(av[1]));
}
