#include "exercices.h"
#include <string.h>

char *token_string(char **str)
{
    if (is_char(str, '\"') == 0)
        return NULL;
    char *copy = strdup(*str);
    int i = 0;
    while (copy[i] != '\"') {
        *str = *str + 1;
        i++;
    }
    *str = *str + 1;
    copy[i] = '\0';
    return copy;
}
