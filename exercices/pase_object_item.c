#include "exercices.h"

int parse_object_item(char **str, object_item *output_item)
{
    output_item->key = token_string(str);
    if (is_char(str, ':') == 0)
        return 0;
    output_item->value = token_string(str);
    return 1;   
}
