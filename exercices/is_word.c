#include "exercices.h"

bool is_word(char **str, char *word)
{
    int i = 0;
    char *copy = *str;
    while (word[i] != '\0') {
        if (is_char(str, word[i]) == 1)
            i = i + 1;
        else {
            *str = copy;
            return 0;
        }
    }
    return 1;
}
