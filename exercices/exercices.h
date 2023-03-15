/*
** EPITECH PROJECT, 2023
** How to do a JSON parser in C - Workshop - Alexis Cheron
** File description:
** Source code
*/
#ifndef JSON_EXERCISES_H
#define JSON_EXERCISES_H
#include <stdio.h>
#include <stdbool.h>

typedef struct object_item_s {
    char *key;
    char *value;
} object_item;

char *token_string(char **str);
bool token_bool(char **str, bool *value);
bool is_char(char **str, char c);
bool is_word(char **str, char *word);

#endif