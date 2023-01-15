/*
** EPITECH PROJECT, 2022
** pushswap
** File description:
** Sorting algorithm for linked lists with limited functions
*/

#include <stdlib.h>
#include <stddef.h>
#include "lib/my/utils/mylist.h"
#include "lib/my/utils/my.h"

linked_list_t *populate_list_a
(algo_state_t *algoState, int *temp_num_arr, int cnt_num)
{
    linked_list_t *head_a = malloc(sizeof(linked_list_t));
    algoState->list_a = head_a;
    int i = 1;
    while (i != cnt_num) {
        algoState->list_a->data = temp_num_arr[i];
        if (i == cnt_num - 1)
            algoState->list_a->next = NULL;
        else
            algoState->list_a->next = malloc(sizeof(linked_list_t));
        algoState->list_a = algoState->list_a->next;
        i++;
    }
    return (head_a);
}

linked_list_t *initialize_head_b(void)
{
    linked_list_t *head_b;
    head_b = NULL;
    return (head_b);
}

void iterate_list_a
(algo_state_t *algoState, linked_list_t **head_a, linked_list_t **head_b)
{
    static int i = 0;
    while (algoState->cnt_num_a-- != algoState->rounds +1) {
        algoState->last_is_smaller = true;
        algoState->last_element_a = last_element_of_list(*head_a);
        if ((*head_a) && algoState->last_element_a < (*head_a)->data &&
            (*head_a)->next
            && algoState->last_element_a < (*head_a)->next->data) {
            rra(&(*head_a), i++);
            algoState->last_is_smaller = false;
        }
        if (algoState->last_is_smaller && (*head_a) && (*head_a)->next
            && (*head_a)->data > (*head_a)->next->data) {
            do_sa(&(*head_a), i++);
        }
        do_pb(&(*head_a), &(*head_b), i++);
        if (algoState->cnt_num_a < 0)
            break;
    }
}

void iterate_list_b
(algo_state_t *algoState, linked_list_t **head_a, linked_list_t **head_b)
{
    while (algoState->cnt_num_b-- != algoState->rounds +1) {
        algoState->last_is_smaller = true;
        algoState->last_element_b = last_element_of_list(*head_b);
        if ((*head_b) != NULL && (*head_b)->next != NULL
            && algoState->last_element_b < (*head_b)->data
            && algoState->last_element_b < (*head_b)->next->data) {
            rrb(&(*head_b));
            algoState->last_is_smaller = false;
        }
        if (algoState->last_is_smaller && (*head_b) != NULL
            && (*head_b)->next != NULL
            && (*head_b)->data > (*head_b)->next->data) {
            do_sb(&(*head_b));
        }
        do_pa(&(*head_a), &(*head_b));
        if (algoState->cnt_num_b < 0)
            break;
    }
}

void algorithm
(algo_state_t *algoState, linked_list_t H_A, linked_list_t H_B, int cnt_num)
{
    int i = 1;
    while (!in_order((*head_a))) {
        algoState->cnt_num_a = cnt_num;
        iterate_list_a(algoState, &(*head_a), &(*head_b));
        algoState->cnt_num_b = cnt_num;
        if ((*head_a) && (*head_a)->next
            && (*head_a)->data > (*head_a)->next->data) {
            do_sa(&(*head_a), i);
        }
        iterate_list_b(algoState, &(*head_a), &(*head_b));
        algoState->rounds++;
    }
    my_putchar('\n');
}
