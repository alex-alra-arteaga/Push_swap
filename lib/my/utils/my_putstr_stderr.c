/*
** EPITECH PROJECT, 2022
** my_ls
** File description:
** Replicates my_ls functionality
*/

#include "my.h"

int my_putstr_stderr(char const *str)
{
    int i = 0;
    while (str[i]) {
        my_putchar_stderr(str[i]);
        i++;
    }
    return (0);
}
