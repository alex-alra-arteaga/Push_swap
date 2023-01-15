/*
** EPITECH PROJECT, 2022
** pushswap
** File description:
** Sorting algorithm for linked lists with limited functions
*/

#include <stddef.h>
#include "lib/my/utils/my.h"

void rra(linked_list_t **head_a, int i)
{
    linked_list_t *latest;
    linked_list_t *prev;

    latest = *head_a;
    if (latest == NULL || latest->next == NULL) {
        return;
    }
    prev = *head_a;
    while (latest->next)
        latest = latest->next;
    while (prev->next != latest) {
        prev = prev->next;
    }
    prev->next = NULL;
    latest->next = *head_a;
    *head_a = latest;
    if (i == 0)
        my_putstr("rra");
    else
        my_putstr(" rra");
}

void rrb(linked_list_t **head_b)
{
    linked_list_t *latest;
    linked_list_t *prev;

    latest = *head_b;
    if (latest == NULL || latest->next == NULL) {
        return;
    }
    prev = *head_b;
    while (latest->next)
        latest = latest->next;
    while (prev->next != latest) {
        prev = prev->next;
    }
    prev->next = NULL;
    latest->next = *head_b;
    *head_b = latest;
    my_putstr(" rrb");
}
