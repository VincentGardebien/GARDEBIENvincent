#include "exercices.h"

bool token_bool(char **str, bool *value)
{
    bool *out = value;
    if (is_word(str, "true")) {
        *out = true;
        return 1;
    } else if (is_word(str, "false")) {
        *out = false;
        return 1;
    }
}
