/*
** EPITECH PROJECT, 2022
** my_revstr
** File description:
** write a function that reverses a string
*/
#include "my.h"

char *my_revstr(char *str)
{
    int i = 0;
    int j = my_strlen(str) - 1;
    char str_temp;
    while (j > i) {
        str_temp = str[i];
        str[i] = str[j];
        str[j] = str_temp;
        i++;
        j--;
    }
    return (str);
}
