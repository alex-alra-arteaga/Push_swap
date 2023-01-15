/*
** EPITECH PROJECT, 2022
** my_swaplong.c
** File description:
** same but with long casting
*/

void my_swap_long(long *a, long *b)
{
    long c;
    c = *a;
    *a = *b;
    *b = c;
}
