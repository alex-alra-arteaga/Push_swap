/*
** EPITECH PROJECT, 2022
** pushswap
** File description:
** Sorting algorithm for linked lists with limited functions
*/
#include <stdlib.h>
#include "lib/my/utils/mylist.h"
#include "lib/my/utils/my.h"

int main(int argc, char **argv)
{
    algo_state_t *algoState = initialize_pushswap();
    linked_list_t *head_a;
    linked_list_t *head_b;
    int *temp_num_arr;

    if (argc == 1) {
        my_putstr_stderr("Incorrect number of arguments\n");
        return (84);
    }
    temp_num_arr = populate_temp_array(argv, argc);
    head_a = populate_list_a(algoState, temp_num_arr, argc);
    head_b = initialize_head_b();
    algorithm(algoState, &head_a, &head_b, argc);
    return (0);
}
