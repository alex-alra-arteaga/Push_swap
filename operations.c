/*
** EPITECH PROJECT, 2022
** pushswap
** File description:
** Sorting algorithm for linked lists with limited functions
*/

#include <stddef.h>
#include "lib/my/utils/mylist.h"
#include "lib/my/utils/my.h"

void do_sa(linked_list_t **head_a, int i)
{
    if (head_a == NULL || *head_a == NULL || (*head_a)->next == NULL) {
        return;
    }
    int *data = &(*head_a)->data;
    int *next_data = &(*head_a)->next->data;
    my_swap(data, next_data);
    if (i == 0)
        my_putstr("sa");
    else
        my_putstr(" sa");
}

void do_sb(linked_list_t **head_b)
{
    if (head_b == NULL || *head_b == NULL || (*head_b)->next == NULL) {
        return;
    }
    int *data = &(*head_b)->data;
    int *next_data = &(*head_b)->next->data;
    my_swap(data, next_data);
    my_putstr(" sb");
}

void do_pa(linked_list_t **head_a, linked_list_t **head_b)
{
    linked_list_t *tmp;

    if (head_a == NULL || *head_a == NULL || head_b == NULL) {
        return;
    }
    tmp = *head_b;
    *head_b = (*head_b)->next;
    tmp->next = *head_a;
    *head_a = tmp;
    my_putstr(" pa");
}

void do_pb(linked_list_t **head_a, linked_list_t **head_b, int i)
{
    linked_list_t *tmp;

    if (head_a == NULL || *head_a == NULL || head_b == NULL) {
        return;
    }
    tmp = *head_a;
    *head_a = (*head_a)->next;
    tmp->next = *head_b;
    *head_b = tmp;
    if (i == 0)
        my_putstr("pb");
    else
        my_putstr(" pb");
}
