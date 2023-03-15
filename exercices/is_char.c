/*
** EPITECH PROJECT, 2023
** json pareur
** File description:
** workshop
*/
#include "exercices.h"

bool is_char(char **str, char c)
{
    if (**str == c) {
        *str = *str + 1;
        return true;
    } else
        return false;
}
