#ifndef SRC_H_
    #define SRC_H_
    #define EXIT_USAGE      84
    #define EXIT_MALLOC     63
    #define EXIT_READ       21
    #define EXIT_OPEN       42
    #define EXIT_ERROR      84
    #define EXIT_SUCCESS    0
    #define MAXNODE         4

struct time {
    int seconds;
};

int help(char *av1, int ac);
int change_letters(char *str);
int count_occ(char *str, char c, int i);
int is_vowel(char c);
int is_more_vowels(char *str);
int check_if_change(char *str);
char find_letter(char *str, int find_vowels);

#endif /* !SRC_H_ */
