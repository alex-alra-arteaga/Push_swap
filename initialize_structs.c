/*
** EPITECH PROJECT, 2022
** pushswap
** File description:
** Sorting algorithm for linked lists with limited functions
*/

#include <stdlib.h>
#include "lib/my/utils/mylist.h"
#include "lib/my/utils/my.h"

algo_state_t *initialize_pushswap(void)
{
    algo_state_t *algoState;
    algoState = malloc(sizeof(algo_state_t));
    algoState->list_a = malloc(sizeof(linked_list_t));
    algoState->list_b = malloc(sizeof(linked_list_t));
    algoState->cnt_num_a = 0;
    algoState->cnt_num_b = 0;
    algoState->last_is_smaller = false;
    algoState->number_of_data = 0;
    algoState->rounds = 1;
    algoState->last_element_a = 0;
    algoState->last_element_b = 0;
    return (algoState);
}
